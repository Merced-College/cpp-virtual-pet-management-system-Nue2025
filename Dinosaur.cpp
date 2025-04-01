#include "Dinosaur.h"
using namespace std;
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <iostream>

// Default constructor
Dinosaur::Dinosaur() : Pet(), favoritePhrase("Unknown") {}
// Parameterized constructor
Dinosaur::Dinosaur(const string& name, const string& species, int age, int hungerLevel, const string& favoritePhrase) : Pet(name, species, age, hungerLevel), favoritePhrase(favoritePhrase) {}

// Setter for favoritePhrase
void Dinosaur::setFavoritePhrase(const string& favoritePhrase) {
    this->favoritePhrase = favoritePhrase;
}
// Getter for favoritePhrase
string Dinosaur::getFavoritePhrase() const {
    return favoritePhrase;
}

// Override printInfo
void Dinosaur::printInfo() const {
    Pet::printInfo();
    cout << "Favorite Phrase: " << favoritePhrase << endl;
}

void Dinosaur::makeSound() const{
    cout << getName() << " says " << favoritePhrase << "!" << endl;
}

void Dinosaur::discover() const{
    //Set the seed for random number generator... GitHub copilot generated
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 0 and 3
    int randomActivity = rand() % 4;

    // Perform an action based on the random number
    switch (randomActivity) {
        case 0:
            cout << getName() << " is digging enthusiastically!" << endl;
            break;
        case 1:
            cout << getName() << " is walking around curiously." << endl;
            break;
        case 2:
            cout << getName() << " is making a mess in the house!" << endl;
            break;
        case 3:
            cout << getName() << " is eating grass peacefully." << endl;
            break;
        default:
            cout << getName() << " is doing something unexpected!" << endl;
            break;
    }
}

void Dinosaur::runAway() const{
    cout << getName() << " is running away!" << endl;
    cout << "Oh no! " << getName() << " is scared!" << endl;
    cout << getFavoritePhrase() << "! " << getName() << " is back home!" << endl;
}