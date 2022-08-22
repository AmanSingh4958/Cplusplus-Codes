#include <iostream>
using namespace std;

/*

Syntax for multiple inheritance:
class Derived-class : Visibility-mode Base-class1, Visibility-mode Base-class2{
    body of derived-class
}

*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1int " << base1int << endl;
        cout << "The value of base2int " << base2int << endl;
        cout << "The sum of base1int and base2int is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived aman;
    aman.set_base1int(23);
    aman.set_base2int(25);
    aman.show();
    return 0;
}