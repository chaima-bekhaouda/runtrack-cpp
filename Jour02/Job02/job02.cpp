#include <iostream>
#include <string>
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
class Pingouin : public Aquatique, public Terrestre {
private:
    string name;        // Name of the penguin, private attribute
    double glideSpeed;  // Gliding speed in m/s, private attribute (newly added)

public:
    // Constructor
    Pingouin(string n, double swimSpeed, double walkSpeed, double glideSpeed)
        : Aquatique(swimSpeed), Terrestre(walkSpeed), name(n), glideSpeed(glideSpeed) {}

    // Copy constructor (newly added)
    Pingouin(const Pingouin& other)
        : Aquatique(other.swimSpeed), Terrestre(other.walkSpeed),
          name(other.name), glideSpeed(other.glideSpeed) {}

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

    // Method to glide (newly added)
    void glide() {
        cout << name << " glides at a speed of " << glideSpeed << " m/s." << endl;
    }

    // Method to modify gliding speed (newly added)
    void setGlideSpeed(double speed) {
        glideSpeed = speed;
    }
};

// Main function
int main() {
    // Create a penguin named Tux with swimming, walking, and gliding speeds
    Pingouin p1("Tux", 2.5, 1.2, 3.0);

    // The penguin introduces itself
    p1.introduce();

    // The penguin swims
    p1.swim();

    // The penguin walks
    p1.walk();

    // The penguin glides
    p1.glide();

    // Create a copy of the penguin using the copy constructor
    Pingouin p2 = p1;

    // Modify the copy's speeds
    p2.setSwimSpeed(3.0);
    p2.setWalkSpeed(1.5);
    p2.setGlideSpeed(4.0);

    // The copied penguin introduces itself
    p2.introduce();

    return 0;
}
