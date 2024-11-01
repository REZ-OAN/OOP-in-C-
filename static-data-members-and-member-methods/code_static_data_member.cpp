#include<iostream>

using namespace std;

class A  {
    private :
        // declaring a static datamember
        static int a;
        int b;
    public :
        void set_b(int x) {
            b = x;
        }
        void update_static() {
            a++;
        }
        void show() {
            cout<<"Count : "<<a<<endl;
            cout<<"B : "<<b<<endl;
        }
};

// must be initialize before using it
int A::a = 0;


int main() {
    A obj1;
    obj1.update_static();
    obj1.set_b(19);
    obj1.show();


    A obj2;
    obj2.set_b(25);
    obj2.update_static();

    
    obj2.show();
}