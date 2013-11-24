#include <iostream>

using namespace std;

class A {
    public:
        virtual void method() { cout << "A::method()" << endl; }
};

class B : public A {
    private:
        void method() { cout << "B::method()" << endl; }
};

int main(void) {
    A* obj = new B;
    obj->method(); // B's "method" is called, despite it being private
}


