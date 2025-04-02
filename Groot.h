#include "Pet.h"
#ifndef GROOT_H
#define GROOT_H


using namespace std;

class Groot : public Pet {
    private: 
        string favoriteMusic;


    public:
        Groot();

        //virtual ~Groot(); //Deconstructor

        
        Groot(const string& name, const string& species, int age, int hungerLevel, const string& favoriteMusic);

        // Setter for breed
        void setFavoriteMusic(const string& favoriteMusic);
        // Getter for breed
        string getFavoriteMusic() const;

        // Override printInfo
        void printInfo() const override;
        // Override makeSound
        void makeSound() const override;

        void dance() const;
        void sing() const;
};
#endif // GROOT_H