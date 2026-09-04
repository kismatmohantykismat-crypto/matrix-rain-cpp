#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    srand(time(0));

    const int width = 80;
    const int height = 25;

    while (true) {
        system("clear");

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {

                if (rand() % 8 == 0) {
                    char c = 33 + rand() % 94;
                    cout << c;
                } else {
                    cout << ' ';
                }
            }
            cout << '\n';
        }

        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(80));
    }

    return 0;
}