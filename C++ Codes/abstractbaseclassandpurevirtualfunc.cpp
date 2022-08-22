/*
Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.

Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.
*/

#include <iostream>
using namespace std;

// BaseClass is an abstract class because it has a pure virtual function display()
class BaseClass{
    protected:
        int BaseData;
    public:
        // virtual void display(){}; this is just a virtual function and it doesn't compel us to overwrite this function in derived class.
        virtual void display() = 0; // do-nothing function --> pure virtual function and it compel us to overwrite this function in derived class.
};

class DerivedClass : private BaseClass{
    protected:
        int DerivedData;
    public:
        void SetData(int a, int b){
            BaseData = a;
            DerivedData = b;
        }
        void display(){
            cout<<"The Value of BaseData : "<<BaseData<<endl;
            cout<<"The Value of DerivedData : "<<DerivedData<<endl;
        }
};

int main(){
    DerivedClass d;
    d.SetData(1, 2);
    d.display();
    return 0;
}