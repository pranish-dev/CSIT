#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound() = 0;
    virtual ~Animal()
    {
        cout << "Animal died" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat Meows" << endl;
    }
    ~Cat()
    {
        cout << "Cat died" << endl;
    }
};
class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Dog Barks" << endl;
    }

    ~Dog()
    {
        cout << "Dog died" << endl;
    }
};
int main()
{

    Animal *a1, *a2;

    a1 = new Cat();
    a2 = new Dog();

    a1->makeSound();
    a2->makeSound();

    delete a1;
    delete a2;

    return 0;
}