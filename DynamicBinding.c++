#include <iostream>

class Animal
{
    const char* _name;

    public: 
        Animal(const char* name) {
            _name = name;
        }

        virtual const char* makeNoise() {
            return "~silence~";
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
        Animal* c = new Cat("kitty!", "meowwww");

        cout << c->makeNoise() << endl;
    }

    return 0;
}
