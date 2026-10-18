#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int totalFrames = rand() % 10 + 1;
    int frame = 1;
    int ack;

    cout << "Total number of frames: " << totalFrames << endl;

    while (frame <= totalFrames) {
        cout << "\nTransmitting Frame " << frame << endl;

        // Simulate acknowledgment (80% success rate)
        ack = rand() % 5;

        if (ack != 0) {
            cout << "Acknowledgment received for Frame "
                 << frame << endl;


                 
            frame++;
        } else {
            cout << "Acknowledgment not received!" << endl;
            cout << "Retransmitting Frame " << frame << endl;
        }

        cout << "Remaining frames: "
             << totalFrames - frame + 1 << endl;
    }

    cout << "\nAll frames transmitted successfully!" << endl;

    return 0;
}