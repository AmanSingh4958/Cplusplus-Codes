#include <iostream>
using namespace std;

// Protected members of a class can be inherited.
class Base
{
protected:
    int x; // protected access specifier is used so that the data member or functions can be inherited by the derived class but can't be used directly by non-class members. It simply provides inheritable and security functionality to the data member/function of the class.
private:
    int y;

public:
    int getDatax();
    int getDatay();
};

int Base ::getDatax()
{
    x = 10;
    return x;
}

int Base ::getDatay()
{
    y = 20;
    return y;
}

/*
                                     --> Inheritance Table --<

                    Public Derivation      	Private Derivation    	Protected Derivation
Private members     Not Inherited           Not Inherited           Not Inherited
Protected members   Protected               Private                 Protected
Public members      Public	                Private               	Protected

*/

class Derived : private Base
{
    int z;
    // Protected members of base-class gets inherited into derived class as private if base-class is inherited privately.

public:
    void setData();
    void display();
};

void Derived ::setData()
{
    z = getDatax() * getDatay();
}

void Derived ::display()
{
    cout << "The value of x is " << getDatax() << endl;
    cout << "The value of y is " << getDatay() << endl;
    cout << "The value of z is " << z << endl;
}

int main()
{
    Derived derived;
    derived.setData();
    derived.display();

    //Base base;
    // cout<<base.x; protected members can't be accessed directly.

    /*
        These two function can't be used because the base class was derived privately so these public member functions of base class are private member functions of derived class and private member of a class can't be accessed directly.
        {derived.getDatax();
        derived.getDatay();}
    */

    return 0;
}