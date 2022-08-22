#include <iostream>
using namespace std;

/*

Order of execution of constructor if inheritance occur in our program
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
   // Constructor of Base class is executed first
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
    // There are 2 base classes in this case, so the constructor of the class which is inherited earliest is executed first.
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
    // Constructor of virtual classes are executed first then the base-classes then the derived classes.
};

*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1-class constructor called"<<endl;
        }
        void print_data_base1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2-class constructor called"<<endl;

        }
        void print_data_base2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{ // --> Base1 constructor will be called first then Base2 then Derived (because Base1 is inherited first then Base2 and at last derived class constructor will be called ).
    int derived1, derived2;
    public:
    // syntax to make constructor for a derived-class.
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            // Parameterized Constructor for derived class is created above which will accept 4 arguments (2 for itself and 1 each for base-class) so that we don't necessarily need to make objects for the base classes and call their constructor. (Constructors for base-classes are necessary if we are making a constructor for a derived class because compiler first executes the base-class constructors)
            derived1 = c;
            derived2 = d;
            cout<<"Derived-class constructor is called"<<endl;
        }
        void print_data_derived(void){
            cout<<"The values of derived1 and derived2 are "<<derived1<<", "<<derived2<<endl;
        }
};

int main()
{
    Derived aman(1, 2, 3, 4);
    aman.print_data_base1();
    aman.print_data_base2();
    aman.print_data_derived();
    return 0;
}