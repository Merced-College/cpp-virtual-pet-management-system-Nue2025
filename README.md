[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=18893574)
# cpp_virtualPet
A project to practice inheritance making VirtualPets.

The program is about a virtual pet management system using inheritance, overriding, and polymorphism. There is the base class called Pet.h and Pet.cpp and it will be using inheritance to override information and create methods unique to that are used. In the files, it contains the code for the name, age, species, breed, hunger level. The makeSound() function is virtual and can be inherited to other classes. 
The Dog class takes in a parameter called breed.
The Cat class takes in a favoriteToy as the parameter.
The Groot class takes in favoriteMusic and dances to music. The object can also sing based on the favoriteMusic. 
The Dinosaur class takes in a favorite saying such as "Yeet" and set's it to the favorite phrase. It also has one more method that is called discover(). It uses a random generated number to choose what the object does. For example, it may dig, wander, make a mess, and a couple more. 
Created a Groot and Dinosaur pet with their own header and source file code. They both inherit from the Pet class. Added a welcome system and custom name for each pet. The Groot pet has an added argument, favorite music, that can be called to dance and/or sing. The Dinosaur class is set with a favorite phrase, like from the Flintstones.

virtual-pet/
├── main.cpp
├── Pet.cpp
└── Pet.h
└── Cat.cpp
    Cat.h
    Dinosaur.h
    Dog.h
    Groot.cpp
    Groot.h