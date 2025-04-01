#include "Pet.h"
#include <string>
#include <iostream>
using namespace std;

class Dinosaur : public Pet {
    private:
        string favoritePhrase;

    public:
        // Default constructor
        Dinosaur();

        // Parameterized constructor
        Dinosaur(const string& name, const string& species, int age, int hungerLevel, const string& favoritePhrase);

        // Setter for favoritePhrase
        void setFavoritePhrase(const string& favoritePhrase);
        
        // Getter for favoritePhrase
        string getFavoritePhrase() const;

        // Override printInfo
        void printInfo() const override;
        
        // Override makeSound
        void makeSound() const override;

        void discover() const;

        void runAway() const;
};