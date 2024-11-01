# Object Oriented Programming With C++

## Table Of Contents
- [Introduction](#introduction)
- [Structure in C VS Class in C++](#structure-in-c-vs-class-in-c)

## Introduction

Object-oriented programming – It is a programming paradigm, based on the concept of "objects". Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc. in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

There are some basic concepts that act as the building blocks of OOPs i.e.

```
- Class
- Object
- Encapsulation
- Abstraction
- Polymorphism
- Inheritance
```
## Structure in C VS Class in C++
| **Structure in C** | **Class in C++** |
| -------- | -------- |
| Way of packing different data types together   | Way of binding data types and functions together   |
| No access specifier<br>(by default all members are public)   | Have access specifier like private, public and protected<br>(by default all members are private)   |
| No Constructor and Destructor | Have Constructor and Destructor |
| No support for Inheritance | Supports single and multiple Inheritance |
| No support for Abstraction or Encapsulation | Supports Encapsulation and Data Hiding |

### Notes
1. `C structures` are primarily used for **grouping data**
2. `C++ classes` provide a complete **object-oriented programming** model
3. `C++ structures` are essentially classes with **default public access**
4. Modern C++ encourages using classes for encapsulation and data hiding
5. C structures are still useful for POD (Plain Old Data) types and C compatibility

> **Tip-1**: Use C structures when you only need to group data together without any behavior. Use C++ classes when you need encapsulation, inheritance, or member functions.

```C++
/// an example of structure

// Structure in C (definition)

struct person {
    char name[51];
    int age;
    char phone_no[12];
    char address[201];
};

// Declaration

int main() {
    struct person p1;

}

/// an example of Class

// Class in C++ (definition)

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
}


```