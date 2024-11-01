#include<iostream>

using namespace std;

class A {
    private :
        int a, b;
    public :

        // declare the prototype of the functions withing the class
        void set_ab(int x, int y);
        void show_ab();
};

// definition outside of the class
void A::set_ab(int x, int y) {
    a = x;
    b = y;
}

void A::show_ab() {
    cout<<"a : "<<a<<" b : "<<b<<endl;
}

int main() {
    A obj;

    obj.set_ab(5, 4);

    obj.show_ab();
}
 
