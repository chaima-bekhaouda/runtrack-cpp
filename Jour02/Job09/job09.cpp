#include <unordered_map>
#include <string>

class Penguin {
private:
    std::unordered_map<std::string, std::string> adventureLog;

public:
    void addAdventure(const std::string& date, const std::string& description) {
        adventureLog[date] = description;
    }

    void updateAdventure(const std::string& date, const std::string& newDescription) {
        adventureLog[date] = newDescription;
    }
};
