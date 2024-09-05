#include <vector>
#include <memory>

class Penguin {
public:
    static std::vector<std::shared_ptr<Penguin>> colony;

    Penguin() {
        colony.push_back(std::make_shared<Penguin>(*this));
    }

    ~Penguin() {
        auto it = std::find(colony.begin(), colony.end(), this);
        if (it != colony.end()) {
            colony.erase(it);
        }
    }
};

std::vector<std::shared_ptr<Penguin>> Penguin::colony;
