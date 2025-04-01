#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Groot.h"
#include "Dinosaur.h"

#include <vector>
using namespace std;

int main() {
    /*
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    //Default pet constructor with the information.
    cout << "Pet 1 Info:\n";
    pet1.printInfo();
    cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0){
        cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    }
    else if (result > 0) cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else cout << "Both pets have the same name.\n";


    //Make sound by the pet.cpp file.
    pet2.makeSound();
    pet1.makeSound();

    cout<<endl;

    //Testing Part 2 of the assignment:
    Dog dog1("Buddy", "Dog", 5, 3, "Golden Retriever");
    cout <<"\nDog Info\n";
    dog1.printInfo();
    dog1.makeSound();

    Cat cat1("Mittens", "Cat", 4, 2, "Ball of Yarn");
    cout <<"\nCat Info\n";
    cat1.printInfo();
    cat1.makeSound();
    cat1.playWithToy();

    cat1.setFavoriteToy("Laser Pointer");
    cat1.playWithToy();

    //Make Groot
    Groot groot("Groot", "Tree", 1, 0, "I want you back");
    cout << "\nGroot Info\n";
    groot.printInfo();
    groot.makeSound();
    groot.dance();
    groot.sing();
    cout<<endl;

    Dinosaur dinosaur("Dino", "Snorkasaurus", 5, 2, "Yabba Dabba Doo"); //Even though Fred says this, Dino knows how to talk
    cout << "\nDinosaur Info\n";
    dinosaur.printInfo();
    dinosaur.makeSound();
    dinosaur.discover();
    dinosaur.runAway();
    cout<<endl;
    */

    /*
    //Polymorphism in class
    Pet* petPtr = new Dog("Fluffy", "Dog", 2, 7, "Poodle"); //creating a pet object that is a pointer. 
    petPtr->printInfo();  
    petPtr->makeSound(); //This will call the makeSound function of the Dog class because the object is a Dog object.
    delete petPtr; //Clean up the dynamically allocated Dog object.
    */

    // Add it to a vector<Pet*> and test polymorphism
    vector<Pet*> pets;
    pets.push_back(new Pet("Generic Pet", "Unknown", 1, 5));
    pets.push_back(new Dog("Dog Rex", "Dog", 3, 6, "Beagle"));
    pets.push_back(new Cat("Cat Whiskers", "Cat", 2, 4, "Mouse"));
    pets.push_back(new Groot("Groot Groot", "Tree", 1, 0, "I am Groot"));
    pets.push_back(new Dinosaur("DINO Dino", "Snorkasaurus", 5, 2, "Yabba Dabba Doo"));

    cout << "\nPolymorphism with vector of pets:\n";
    for (int i = 0; i < pets.size(); i++) {
        pets.at(i)->makeSound(); // Call makeSound() polymorphically
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < pets.size(); i++) {
        delete pets.at(i);
    }
    pets.clear(); // Clear the vector to remove dangling pointers

    cout << "All pets have been deleted." << endl;
    cout << "End of program." << endl;

    return 0;
}
