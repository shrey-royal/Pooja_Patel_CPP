#include <iostream>
using namespace std;

int main() {
    string exotic_fruits[] = {
        "Dragon Fruit",
        "Kiwi",
        "Durian",
        "Jack Fruit",
        "Lucuma",
        "Fuyu Persimmon",
        "Pomelo",
        "Atemoya",
        "Black Sapota",
        "Cherimoya"
    };
    int min = INT32_MAX;
    int max = 0;

    // for (int i = 0; i < 10; i++) {
    //     cout << exotic_fruits[i] << endl;
    // }

    for (int i = 0; i < 10; i++) {
        if (exotic_fruits[min].length() > exotic_fruits[i].length()) {
            min = i;
        }
        
        if (exotic_fruits[max].length() < exotic_fruits[i].length()) {
            max = i;
        }
    }

    cout << "Min: " << exotic_fruits[min] << endl;
    cout << "Max: " << exotic_fruits[max] << endl;

    return 0;
}