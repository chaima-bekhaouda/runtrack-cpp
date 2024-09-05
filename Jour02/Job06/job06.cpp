#include <list>
#include <string>

class Penguin {
public:
    static std::list<std::string> meetupLocations;

    static void addMeetupLocation(const std::string& location) {
        meetupLocations.push_back(location);
    }

    static void removeMeetupLocation(const std::string& location) {
        meetupLocations.remove(location);
    }
};

std::list<std::string> Penguin::meetupLocations;
