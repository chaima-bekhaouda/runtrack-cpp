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
};

// Penguin class, inheriting from Aquatique and Terrestre
class Pingouin : public Aquatique, public Terrestre {
private:
    string name; // Name of the penguin, private attribute

public:
    // Constructor
    Pingouin(string n, double swimSpeed, double walkSpeed)
        : Aquatique(swimSpeed), Terrestre(walkSpeed), name(n) {}

    // Method to introduce itself
    void introduce() {
        cout << "Hello, I am " << name << ". I can walk at "
             << walkSpeed << " m/s and swim at " << swimSpeed << " m/s." << endl;
    }

    // Override the swim() method
    void swim() override {
        cout << name << " swims at a speed of " << swimSpeed << " m/s." << endl;
    }

    // Override the walk() method
    void walk() override {
        cout << name << " walks at a speed of " << walkSpeed << " m/s." << endl;
    }
};

// Main function
int main() {
    // Create a penguin named Tux with swimming and walking speeds
    Pingouin p1("Tux", 2.5, 1.2);

    // The penguin introduces itself
    p1.introduce();

    // The penguin swims
    p1.swim();

    // The penguin walks
    p1.walk();

    return 0;
}