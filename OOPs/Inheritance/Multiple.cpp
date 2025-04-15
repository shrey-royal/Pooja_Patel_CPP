#include <iostream>
using namespace std;

class Camera {
public:
    void takePhoto() {
        cout << "Photo taken with the camera." << endl;
    }
};

class MusicPlayer {
public:
    void playMusic() {
        cout << "Playing music from the music player." << endl;
    }
};

class SmartPhone : public Camera, public MusicPlayer {
public:
    void makeCall() {
        cout << "Calling a contact..." << endl;
    }
};

int main() {
    SmartPhone myPhone;
    cout << "--- Smartphone Actions ---\n";
    myPhone.takePhoto();
    myPhone.playMusic();
    myPhone.makeCall();

    return 0;
}