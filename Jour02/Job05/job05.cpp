#include <algorithm>

class Penguin {
public:
    static void sortColonyByRaceTime() {
        std::sort(colony.begin(), colony.end(), [](const std::shared_ptr<Penguin>& a, const std::shared_ptr<Penguin>& b) {
            return a->calculateRaceTime() < b->calculateRaceTime();
        });
    }
};
