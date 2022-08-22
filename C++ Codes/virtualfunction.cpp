// This code is an example of run time / dynamic polymorphism (late binding)

/*
Rules for virtual functions :
    1. They cannot be static
    2. They are accessed by object pointers
    3. Virtual functions can be a friend of another class
    4. A virtual function in the base class might not be used.
    5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/

#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        virtual void display(){ // virtual keyword is necessary so that the BaseClass_pointer pointing to DerivedClass_object actually execute this display().
        // if virtual keyword was not present then BaseClass_pointer will execute BaseClass display() even if the pointer is pointing to DerivedClass_object.
            cout<<"Displaying BaseClass variable var_base : "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying BaseClass variable var_base using DerivedClass_pointer : "<<var_base<<endl;
            cout<<"Displaying DerivedClass variable var_derived : "<<var_derived<<endl;
        }
};

int main()
{
    BaseClass *BaseClass_pointer;
    BaseClass BaseClass_object;
    DerivedClass DerivedClass_object;
    BaseClass_pointer = &DerivedClass_object;

    BaseClass_pointer->var_base = 23;
    DerivedClass_object.var_derived = 32;
    BaseClass_pointer->display();
    return 0;
}