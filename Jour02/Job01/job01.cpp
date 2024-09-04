#include <iostream>

// Aquatic class with swimming ability
class Aquatic {
protected:
    double swimSpeed; // Swimming speed in meters per second

public:
    Aquatic(double speed = 0.0) : swimSpeed(speed) {}

    virtual void swim() {
        std::cout << "Swimming at " << swimSpeed << " m/s." << std::endl;
    }
};

// Terrestrial class with walking ability
class Terrestrial {
protected:
    double walkSpeed; // Walking speed in meters per second

public:
    Terrestrial(double speed = 0.0) : walkSpeed(speed) {}

    virtual void walk() {
        std::cout << "Walking at " << walkSpeed << " m/s." << std::endl;
    }
};

// Penguin class inheriting from both Aquatic and Terrestrial
class Penguin : public Aquatic, public Terrestrial {
public:
    Penguin(double swimSpeed = 0.0, double walkSpeed = 0.0)
        : Aquatic(swimSpeed), Terrestrial(walkSpeed) {}

    void presentYourself() {
        std::cout << "I am a penguin. I can swim and walk!" << std::endl;
    }

    void swim() override {
        std::cout << "Penguin swimming at " << swimSpeed << " m/s." << std::endl;
    }

    void walk() override {
        std::cout << "Penguin walking at " << walkSpeed << " m/s." << std::endl;
    }
};

int main() {
    Penguin pingu(1.5, 0.7);
    pingu.presentYourself();
    pingu.swim();
    pingu.walk();

    return 0;
}
