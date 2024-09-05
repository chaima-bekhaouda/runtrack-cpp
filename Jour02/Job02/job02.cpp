#include <iostream>

class Penguin {
private:
    double glideSpeed; // Glide speed in meters per second

public:
    // Constructor with glide speed
    Penguin(double swimSpeed, double walkSpeed, double glideSpeed)
        : Aquatic(swimSpeed), Terrestrial(walkSpeed), glideSpeed(glideSpeed) {}

    // Copy constructor
    Penguin(const Penguin& other)
        : Aquatic(other.swimSpeed), Terrestrial(other.walkSpeed), glideSpeed(other.glideSpeed) {}

    void setGlideSpeed(double speed) {
        glideSpeed = speed;
    }

    double getGlideSpeed() const {
        return glideSpeed;
    }

    void glide() {
        std::cout << "Penguin gliding at " << glideSpeed << " m/s." << std::endl;
    }
};
