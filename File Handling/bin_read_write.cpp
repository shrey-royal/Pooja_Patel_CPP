#include<iostream>
#include<fstream>
using namespace std;

struct Person {
    char name[50];
    int age;
};

class BinaryReadWrite {
private:
    ifstream fin;
    ofstream fout;
    string file_name;

public:
    BinaryReadWrite(string file_name) {
        if (!file_name.empty()) {
            this->file_name = file_name + ".bin";
        }
    }

    void writeFile() {
        fout.open(file_name, ios::binary);
        if (!fout) {
            cout << "File could not be opened for writing!" << endl;
            return;
        }

        Person p;
        cout << "Enter data to write to binary file (type name = 'end' to stop): \n";
        while(true) {
            cout << "Name: ";
            cin.getline(p.name, 50);
            if (string(p.name) == "end") break;

            cout << "Age: ";
            cin >> p.age;
            cin.ignore();

            fout.write((char *)&p, sizeof(Person));
        }

        cout << "Binary file written successfully!" << endl;
        fout.close();
    }

    void readFile() {
        fin.open(file_name, ios::binary);
        if (!fout) {
            cout << "File could not be opened for reading!" << endl;
            return;
        }

        Person p;
        cout << "Reading from binary file:\n";
        while (fin.read((char *)&p, sizeof(Person))) {
            cout << "Name: " << p.name << ", Age: " << p.age << endl;
        }
        fin.close();
    }
};

int main() {
    string fname;
    cout << "Enter file name: ";
    getline(cin, fname);

    BinaryReadWrite file(fname);
    // file.writeFile();
    file.readFile();

    return 0;
}