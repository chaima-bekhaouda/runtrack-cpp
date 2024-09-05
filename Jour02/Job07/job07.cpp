#include <map>
#include <string>

class Penguin {
private:
    std::map<std::string, int> skills;

public:
    void addSkill(const std::string& skillName, int level) {
        skills[skillName] = level;
    }

    void removeSkill(const std::string& skillName) {
        skills.erase(skillName);
    }

    void listSkills() const {
        for (const auto& skill : skills) {
            std::cout << skill.first << ": " << skill.second << std::endl;
        }
    }
};
