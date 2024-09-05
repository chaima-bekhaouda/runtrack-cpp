#include <unordered_set>
#include <string>

class Penguin {
private:
    std::unordered_set<std::string> foodLocations;

public:
    void addFoodLocation(const std::string& location) {
        foodLocations.insert(location);
    }
};
