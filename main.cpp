#include <iostream>
#include <thread>
#include <chrono>

int main() {
    int seconds = 0;

    while (true) {
        int hrs = seconds / 3600;
        int mins = (seconds % 3600) / 60;
        int secs = seconds % 60;

        printf("%02d:%02d:%02d\n", hrs, mins, secs);

        seconds++;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}