#include<iostream>

using namespace std;

// Definition

class Triangle {
    private :
        float height;
        float breadth;
    public :
        void set_bh(int a, int b) {
            height = b;
            breadth = a;
        }
        double get_area() {
            return height * breadth * .5;
        }
};

// Declaration

int main() {
    Triangle T1;
    int h,b;
    cout<<"Enter breadth and height : ";
    cin>>b>>h;
    
    // accessing public members using dot operator from other functions
    T1.set_bh(b,h);
    cout<<"Calculated Area : "<<T1.get_area()<<endl;
}