#include "Groot.h"
using namespace std;

Groot::Groot() : Pet(), favoriteMusic("Unknown"){}

Groot::Groot(const string& name, const string& species, int age, int hungerLevel, const string& favoriteMusic) : Pet(name, species, age, hungerLevel), favoriteMusic(favoriteMusic) {}

void Groot::setFavoriteMusic(const string& favoriteMusic){
    this->favoriteMusic = favoriteMusic;
}

string Groot::getFavoriteMusic() const{
    return favoriteMusic;
}

void Groot::printInfo() const{
    Pet::printInfo();
    cout << "Favorite Music: " << favoriteMusic << endl;
}

void Groot::makeSound() const{
    cout << getName() << " says I am Groot!" << endl;
}

void Groot::dance() const{
    cout << getName() << " is dancing to " << favoriteMusic << endl;
}

void Groot::sing() const{
    cout << getName () << " is singing \"I am groot!\"(" << favoriteMusic << ")" << endl;
}