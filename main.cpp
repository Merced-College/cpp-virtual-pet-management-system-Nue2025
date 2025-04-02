#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Groot.h"
#include "Dinosaur.h"

#include <vector>
using namespace std;


int main() {
    /* //Part of the assignment.
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
    //End of beginning part of the assignment.
    */


    //Submission: Created a derived class for Dog and Cat.
    //Original pet type I created:
    Dinosaur dino1("Dino", "Dinosaur", 5, 3, "Roar");
    dino1.printInfo();
    dino1.makeSound();
    dino1.play();
    dino1.setFavoritePhrase("GRRRRR");
    dino1.makeSound();
    cout<< "----------------------------------------" << endl;
    
    //Polymorphism demonstrated in main.cpp with at least 3 pets
    Pet* petPtr = new Dog("Fluffy", "Dog", 2, 7, "Poodle"); //creating a pet object that is a pointer.
    petPtr->printInfo();  
    petPtr->makeSound(); //This will call the makeSound function of the Dog class because the object is a Dog object.
    
    Groot* grootPtr = new Groot("Baby Groot", "Tree", 1, 0, "I Want You Back"); //creating a pet object that is a pointer.
    grootPtr->printInfo();  
    grootPtr->makeSound(); //This will call the makeSound function of the Dog class because the object is a Dog object.
    grootPtr->dance();
    grootPtr->sing();
    
    Cat* catPtr = new Cat("Minnie", "Cat", 1, 4, "Striped"); //creating a pet object that is a pointer.
    catPtr->printInfo();  
    catPtr->makeSound(); //This will call the makeSound function of the Dog class because the object is a Dog object.

    cout<< "----------------------------------------" << endl;

    delete petPtr; //Clean up the dynamically allocated Pet object.
    delete grootPtr; //Clean up the dynamically allocated Groot object.
    delete catPtr; //Clean up the dynamically allocated Cat object.


    //Customized challenge
    string userName;
    cout << "\nEnter your name: ";
    cin >> userName;
    cout << "Hello, " << userName << "! Welcome to the Pet Simulator!" << endl;
    cout << "----------------------------------------" << endl;
    
    // Add it to a vector<Pet*> and test polymorphism
    vector<Pet*> pets;
    std::string dogName;
    std::string dogSpecies;
    std::string dogBreed;
    int dogAge, dogHungerLevel;
    cout << "Enter the name of your dog: ";
    cin >> dogName;
    cout << "Enter the species of your dog: ";
    cin >> dogSpecies;
    cout << "Enter the age of your dog: ";
    cin >> dogAge;
    cout << "Enter the hunger level of your dog (0-10): ";
    cin >> dogHungerLevel;
    cout << "Enter the breed of your dog: ";
    cin >> dogBreed;
    pets.push_back(new Dog(dogName, dogSpecies, dogAge, dogHungerLevel, dogBreed));

    cout << "----------------------------------------" << endl;

    string catName, catSpecies, catFavToy;
    int catAge, catHungerLevel;
    cout << "Enter the name of your cat: ";
    cin >> catName;
    cout << "Enter the species of your cat: ";
    cin >> catSpecies;
    cout << "Enter the age of your cat: ";
    cin >> catAge;
    cout << "Enter the hunger level of your cat (0-10): ";
    cin >> catHungerLevel;
    cout << "Enter the favorite toy of your cat: ";
    cin >> catFavToy;
    pets.push_back(new Cat(catName, catSpecies, catAge, catHungerLevel, catFavToy));

    cout << "----------------------------------------" << endl;

    string grootName, grootSpecies, grootMusic;
    int grootAge, grootHungerLevel;
    cout << "Enter the name of your Groot: ";
    cin >> grootName;
    cout << "Enter the species of your Groot: ";
    cin >> grootSpecies;
    cout << "Enter the age of your Groot: ";
    cin >> grootAge;
    cout << "Enter the hunger level of your Groot (0-10): ";
    cin >> grootHungerLevel;
    cout << "Enter the favorite music of your Groot: ";
    cin >> grootMusic;
    pets.push_back(new Groot(grootName, grootSpecies, grootAge, grootHungerLevel, grootMusic));

    cout << "----------------------------------------" << endl;


    string dinoName, dinoSpecies, dinoPhrase;
    int dinoAge, dinoHungerLevel;
    cout << "Enter the name of your Dinosaur: ";
    cin >> dinoName;
    cout << "Enter the species of your Dinosaur: ";
    cin >> dinoSpecies;
    cout << "Enter the age of your Dinosaur: ";
    cin >> dinoAge;
    cout << "Enter the hunger level of your Dinosaur (0-10): ";
    cin >> dinoHungerLevel;
    cout << "Enter the favorite phrase of your Dinosaur: ";
    cin >> dinoPhrase;
    pets.push_back(new Dinosaur(dinoName, dinoSpecies, dinoAge, dinoHungerLevel, dinoPhrase));

    cout << "----------------------------------------" << endl;

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
    
    cout << "----------------------------------------" << endl;
    cout << "Thank you for using the Pet Simulator, " << userName << "! Goodbye!" << endl;
    cout << "----------------------------------------" << endl;
    return 0;
}