#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number()
    { // Default constructor
        num = 0;
    }

    Number(int n)
    { // Parameterised constructor
        num = n;
    }

    // Number (Number &obj){    // Copy constructor
    //     num = obj.num;
    // }

    void display()
    {
        cout << "The value of number is " << num << "." << endl;
    }
};

int main()
{
    Number x, y, z(45), z3; // 2 default and 1 parameterised constructor called
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked and if we didn't define a copy constructor even then the compiler will not throw error because compiler always create a copy constructor for each class on itself.
    z1.display();

    Number z2 = z; // Copy constructor is invoked here.
    z2.display();

    z3 = z; // Here copy constructor is not invoked because z3 object was created along with z, this line just means that we are simply assigning value of z to z3.
    z3.display();

    return 0;
}