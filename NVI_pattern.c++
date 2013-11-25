#include <iostream>
#include "assert.h"

using namespace std;

class A {
    public:
        int method(int a, int b) {
            cout << "A::method" << endl;

            assert(a > 0);
            assert(b > 0);
            int res = method_impl(a, b);
            assert(res > 0);
            return res;
        } 

    private:
        virtual int method_impl(int a, int b) = 0;
};

class B: public A {
    private:
        int method_impl(int a, int b) {
            cout << "B::method_impl" << endl;

            return a+b;
        }
};

int main(void) {
    B* b = new B();
    b->method(3, 4);
}
