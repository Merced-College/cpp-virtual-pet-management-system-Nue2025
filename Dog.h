#include "Pet.h"
#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
using namespace std;

class Dog : public Pet {
    private:
        string breed;
    
    public:
        // Default constructor
        Dog();
    
        // Parameterized constructor
        Dog(const string& name, const string& species, int age, int hungerLevel,  const string& breed);
        
        // Setter for breed
        void setBreed(const string& breed);
        // Getter for breed
        string getBreed() const;
    
        
        // Override printInfo
        void printInfo() const override;
        // Override makeSound
        void makeSound() const override;
    };
    
    #endif // DOG_H