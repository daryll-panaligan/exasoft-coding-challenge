/*
1.  I wish to use three classes Animal, Cat and Dog in main() function as shown.
    Please implement these three classes.
*/

#include <string>
#include <iostream>

class Animal
{
public:
    virtual std::string eat() const = 0;
};

class Dog : public Animal
{
public:
    std::string eat() const
    {
        return "Eats bone";
    }
};

class Cat : public Animal
{
public:
    std::string eat() const
    {
        return "Eats fish";
    }
};

int main()
{
    Dog dog;
    Cat cat;

    // Animal animal; // i want the compiler to disallow this

    Animal *pAnimal = &dog;
    std::cout << pAnimal->eat(); // expected output is "Eats bone"
    pAnimal = &cat;
    std::cout << pAnimal->eat(); // expected output is "Eats fish"
}
