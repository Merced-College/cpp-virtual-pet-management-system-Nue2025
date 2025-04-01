#include "Cat.h"
using namespace std;

Cat::Cat() : Pet(), favoriteToy("Unknown") {}

Cat::Cat(const string& name, const string& species, int age, int hungerLevel, const string& favoriteToy) : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy) {}

void Cat::setFavoriteToy(const string& favoriteToy) {
    this->favoriteToy = favoriteToy;
}

string Cat::getFavoriteToy() const{
    return favoriteToy;
}

// Override printInfo
void Cat::printInfo() const {
    Pet::printInfo();
}

void Cat::makeSound() const {
    cout<< getName() << " says Meow! Meow!"<<endl;
}

//idk if i need this...
void Cat::playWithToy() const{
    cout <<  getName() << " plays with " << favoriteToy << endl;
}