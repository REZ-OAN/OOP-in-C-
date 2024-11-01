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
        void show_a() {
            cout<<a<<endl;
        }
};

int main() {
    A obj;
    
    // Public member access - works fine
    obj.b = 10;
    cout << "Public member b = " << obj.b << endl;
    
    obj.set_a(20);
    cout<<"Private member a = ";
    obj.show_a();
    
    return 0;
}
