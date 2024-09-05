#include <unordered_map>
#include <string>

class Penguin {
public:
    static std::unordered_map<std::string, std::string> meetupToFishingSpot;

    void goToMeetup(const std::string& meetupLocation) {
        auto it = meetupToFishingSpot.find(meetupLocation);
        if (it != meetupToFishingSpot.end()) {
            std::cout << "Found fish at " << it->second << std::endl;
        } else {
            std::cout << "No fish found at this meetup location." << std::endl;
        }
    }
};

std::unordered_map<std::string, std::string> Penguin::meetupToFishingSpot;
