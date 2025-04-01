#include "Dog.h"

// Default constructor
Dog::Dog() : Pet(), breed("Unknown") {}

// Parameterized constructor
Dog::Dog(const string& name, const string& species, int age, int hungerLevel, const string& breed) : Pet(name, species, age, hungerLevel), breed(breed) {}

// Getter for breed
string Dog::getBreed() const {
    return breed;
}

// Setter for breed
void Dog::setBreed(const string& breed) {
    this->breed = breed;
}

// Override printInfo
void Dog::printInfo() const {
    Pet::printInfo();
    cout << "Breed: " << breed << endl;
}

// Override makeSound
void Dog::makeSound() const {
    cout << getName() << " barks Woof! Woof!" << endl;
}