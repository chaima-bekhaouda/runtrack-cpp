#include <iostream>

class Penguin {
public:
    double calculateRaceTime() const {
        double time = 0.0;
        time += 15 / glideSpeed;   // 15 meters of gliding
        time += 20 / walkSpeed;    // 20 meters on flat
        time += 50 / swimSpeed;    // 50 meters of swimming
        time += 15 / walkSpeed;    // 15 meters on flat
        return time;
    }

    static void showRaceTimes() {
        for (const auto& penguin : colony) {
            std::cout << "Penguin: " << penguin->calculateRaceTime() << " seconds." << std::endl;
        }
    }
};
