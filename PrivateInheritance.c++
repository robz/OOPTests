#include <iostream>

using namespace std;

class A {
    public:
        virtual const char* talk() {
            return "A::talk";
        }

        void printTalk() {
            cout << talk() << endl;
        }
};

class B : private A {
    public:
        void printSomeStuff() {
            cout << "B::printSomeStuff" << endl;
            printTalk();
        }

    private:
        const char* talk() {
            return "B::talk";
        }       
};

class C {
    public:
        void whatever() {

        }
};

int main(void) {
    B* b = new B;
    b->printSomeStuff();
}
