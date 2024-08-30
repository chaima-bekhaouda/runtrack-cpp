#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>  // For std::find_if

using namespace std;

// Aquatic class, representing swimming characteristics
class Aquatique {
protected:
    double swimSpeed; // Swimming speed in m/s, protected attribute

public:
    // Constructor
    Aquatique(double speed) : swimSpeed(speed) {}

    // Virtual method for swimming
    virtual void swim() {
        cout << "The animal swims at a speed of " << swimSpeed << " m/s." << endl;
    }

    // Method to modify swimming speed
    void setSwimSpeed(double speed) {
        swimSpeed = speed;
    }
};

// Terrestrial class, representing walking characteristics
class Terrestre {
protected:
    double walkSpeed; // Walking speed in m/s, protected attribute

public:
    // Constructor
    Terrestre(double speed) : walkSpeed(speed) {}

    // Virtual method for walking
    virtual void walk() {
        cout << "The animal walks at a speed of " << walkSpeed << " m/s." << endl;
    }

    // Method to modify walking speed
    void setWalkSpeed(double speed) {
        walkSpeed = speed;
    }
};

// Penguin class, inheriting from Aquatique and Terrestre
class Pingouin : public Aquatique, public Terrestre, public std::enable_shared_from_this<Pingouin> {
private:
    string name;        // Name of the penguin, private attribute
    double glideSpeed;  // Gliding speed in m/s, private attribute

public:
    static vector<shared_ptr<Pingouin>> allPenguins; // Static vector of all penguins

    // Constructor
    Pingouin(string n, double swimSpeed, double walkSpeed, double glideSpeed)
        : Aquatique(swimSpeed), Terrestre(walkSpeed), name(n), glideSpeed(glideSpeed) {
        // Do not use shared_from_this() in the constructor
    }

    // Destructor
    ~Pingouin() {
        // Remove the current penguin from the static vector when destroyed
        auto it = find_if(allPenguins.begin(), allPenguins.end(),
                          [this](shared_ptr<Pingouin> p) { return p.get() == this; });
        if (it != allPenguins.end()) {
            allPenguins.erase(it);
        }
    }

    // Method to introduce itself
    void introduce() {
        cout << "Hello, I am " << name << ". I can walk at "
             << walkSpeed << " m/s, swim at " << swimSpeed
             << " m/s, and glide at " << glideSpeed << " m/s." << endl;
    }

    // Override the swim() method
    void swim() override {
        cout << name << " swims at a speed of " << swimSpeed << " m/s." << endl;
    }

    // Override the walk() method
    void walk() override {
        cout << name << " walks at a speed of " << walkSpeed << " m/s." << endl;
    }

    // Method to glide
    void glide() {
        cout << name << " glides at a speed of " << glideSpeed << " m/s." << endl;
    }

    // Method to modify gliding speed
    void setGlideSpeed(double speed) {
        glideSpeed = speed;
    }

    // Static method to add a penguin to the vector
    static void addPenguin(shared_ptr<Pingouin> p) {
        allPenguins.push_back(p);
    }
};

// Definition of the static vector in the Pingouin class
vector<shared_ptr<Pingouin>> Pingouin::allPenguins;

int main() {
    // Create a penguin named Tux with swimming, walking, and gliding speeds
    auto p1 = make_shared<Pingouin>("Tux", 2.5, 1.2, 3.0);
    Pingouin::addPenguin(p1);

    // The penguin introduces itself
    p1->introduce();

    // The penguin swims
    p1->swim();

    // The penguin walks
    p1->walk();

    // The penguin glides
    p1->glide();

    // Create a copy of the penguin using the copy constructor
    auto p2 = make_shared<Pingouin>(*p1);
    Pingouin::addPenguin(p2);

    // Modify the copy's speeds
    p2->setSwimSpeed(3.0);
    p2->setWalkSpeed(1.5);
    p2->setGlideSpeed(4.0);

    // The copied penguin introduces itself
    p2->introduce();

    // Display the number of penguins in the static vector
    cout << "Number of penguins: " << Pingouin::allPenguins.size() << endl;

    return 0;
}
