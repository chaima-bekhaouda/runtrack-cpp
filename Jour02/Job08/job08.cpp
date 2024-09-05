#include <set>
#include <memory>

class Penguin {
private:
    std::set<std::weak_ptr<Penguin>, std::owner_less<std::weak_ptr<Penguin>>> friends;

public:
    void addFriend(const std::shared_ptr<Penguin>& friendPenguin) {
        friends.insert(friendPenguin);
    }

    void removeFriend(const std::shared_ptr<Penguin>& friendPenguin) {
        friends.erase(friendPenguin);
    }
};
