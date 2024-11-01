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
        // declaring static function (can only access static data members)
        static  void  update_static() {
            // does not have this pointer
            // this.a = this.a + 1;
            a++;
            // this update will give an error (compilation error)
            //b++;
           
            
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
    A::update_static();
    obj1.set_b(19);

    obj1.show();


    A obj2;
    obj2.set_b(25);
    A::update_static();

    
    obj2.show();
}