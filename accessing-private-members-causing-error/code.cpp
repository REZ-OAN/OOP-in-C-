#include<iostream>
using namespace std;

class A {
    private:
        int a;
    public:
        int b;
        void set_a(int x) {
            a = x;
        }
};

int main() {
    A obj;
    
    // Public member access - works fine
    obj.b = 10;
    cout << "Public member b = " << obj.b << endl;
    
    // This will cause actual compilation error
    obj.a = 20;  // Error: 'int A::a' is private
    cout << obj.a;  // Error: 'int A::a' is private
    
    return 0;
}