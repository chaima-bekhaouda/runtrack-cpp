#include <multiset>

class Penguin {
private:
    std::multiset<double> competitionTimes;

public:
    void addCompetitionTime(double time) {
        competitionTimes.insert(time);
    }

    void showCompetitionTimes() const {
        for (const auto& time : competitionTimes) {
            std::cout << time << " seconds" << std::endl;
        }
    }
};
