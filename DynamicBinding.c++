#include <stdio.h>
#include <iostream>

class Animal
{
    const char* _name;

    public: 
        Animal(const char* name) {
            _name = name;
        }

    private:
        virtual const char* makeNoise() {
            return "~silence~";
        }

        void printNoise() {
            printf("%s\n", makeNoise());
        }
};

class Dog : public Animal
{
    const char* _bark;

    public:
        Dog(const char* name, const char* bark) : Animal(name) {
            _bark = bark;
        }

        const char* makeNoise() {
            return _bark;
        }
};

class Cat : public Animal
{
    const char* _meow;

    public:
        Cat(const char* name, const char* meow) : Animal(name) {
            _meow = meow;
        }

    private:
        const char* makeNoise() {
            return _meow;
        }
};

int main(void) {
    using namespace std;

    {
        Animal a("joy");
        Animal* d = new Dog("georgie", "rrruff");
        Cat* c = new Cat("kitty!", "meowwww");

        Animal* c2 = dynamic_cast<Animal*>(c);

        if (!c2) {
            cout << "nope nope nope" << endl;
        } else {
            //cout << c2->makeNoise() << endl;
            //c2->printNoise();
        }
    }

    {
        Dog* d = new Dog("georgie", "rrruff");
        d->printNoise();
    }

    {
        int x;
        int* px = &x;
    }

    return 0;
}
