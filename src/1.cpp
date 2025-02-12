/*
1.  I wish to use three classes Animal, Cat and Dog in main() function as shown.
    Please implement these three classes.
*/

void main()
{
    Dog dog;
    Cat cat;
    Animal animal; // i want the compiler to disallow this
    Animal *pAnimal = &dog;
    cout << pAnimal->eat(); // expected output is "Eats bone"
    pAnimal = &cat;
    cout << pAnimal->eat(); // expected output is "Eats fish"
}
