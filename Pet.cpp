#include "Pet.h"
using namespace std;

// Default constructor
Pet::Pet() : name("Unnamed"), species("Unknown"), age(0), hungerLevel(5) {}

// Parameterized constructor
Pet::Pet(const string& name, const string& species, int age, int hungerLevel)
    : name(name), species(species), age(age), hungerLevel(hungerLevel) {}

// Destructor
Pet::~Pet(){
    cout<< name << " has been deconstructed.\n";
}

// Accessors
string Pet::getName() const {
    return name;
}

string Pet::getSpecies() const {
    return species;
}

int Pet::getAge() const {
    return age;
}

int Pet::getHungerLevel() const {
    return hungerLevel;
}

// Mutators
void Pet::setName(const string& name) {
    this->name = name;
}

void Pet::setSpecies(const string& species) {
    this->species = species;
}

void Pet::setAge(int age) {
    if (age >= 0) {
        this->age = age;
    }
}

void Pet::setHungerLevel(int level) {
    if (level >= 0 && level <= 10) {
        hungerLevel = level;
    }
}

// CompareTo
int Pet::compareTo(const Pet& other) const {
    if (name < other.name) return -1;
    if (name > other.name) return 1;
    return 0;
}

// Output
void Pet::printInfo() const {
    cout << "Pet Name: " << name << endl;
    cout << "Species: " << species << endl;
    cout << "Age: " << age << endl;
    cout << "Hunger Level: " << hungerLevel << "/10" << endl;
}

// Adding:
void Pet::makeSound() const {
    cout << name << " makes an undefined noise.\n";
}

void Pet::play() const {
    cout << name << " is playing.\n";
}