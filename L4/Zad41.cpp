#include <iostream>

class Animal
{
public:
    virtual void makeSound()
    {
        std::cout << "I'm an animal" << std::endl;
    }
};

class Dog : public Animal
{
public:
    virtual void makeSound()
    {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal
{
public:
    virtual void makeSound()
    {
        std::cout << "Meow!" << std::endl;
    }
};

Animal *chooseAnimal(int number)
{
    if (number % 2 == 0)
    {
        return new Dog();
    }
    else
    {
        return new Cat();
    }
}

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    Animal *animal = chooseAnimal(x);
    animal->makeSound();

    delete animal;

    return 0;
}