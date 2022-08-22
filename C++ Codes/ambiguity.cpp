#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"Hello Idiots."<<endl;;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Hey Guys."<<endl;
        }
};

class Derived : public Base1, Base2{
    int a;  // Base1 and Base2 classes contained greet() which perform different tasks but which of them will be used in derived class when called in main( ) is ambigious.
    public:
        void greet(){
            Base1 ::greet(); // This line of code removed the ambiguity and told the compiler to run Base1 greet() when called using object of derived class.
        }
};

int main()
{
    Base1 B1;
    B1.greet();
    Base2 B2;
    B2.greet();
    Derived D;
    D.greet(); // this line will run greet() of class Base1.
    return 0;
}