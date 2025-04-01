#include "Pet.h"
#ifndef CAT_H
#define CAT_H

#include <string>
#include <iostream>
using namespace std;

class Cat : public Pet {
    private:
        string favoriteToy;

    public:
    // Default constructor
        Cat();

        //Parameterized constructor
        Cat(const string&name, const string& species, int age, int hungerLevel, const string& favoriteToy);

        //Setter & getter for favoriteToy
        void setFavoriteToy(const string&favoriteToy);
        string getFavoriteToy() const;

        void printInfo() const override;
        
        // Override makeSound
        void makeSound() const override;

        void playWithToy() const;
};

#endif // DOG_H