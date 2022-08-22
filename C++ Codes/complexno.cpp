// addition of complex numbers code ( using objects as arguments in a function )

#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;

public:
    void setData()
    {
        cout << "Enter the value of real part = ";
        cin >> real;
        cout << "Enter the value of imaginary part = ";
        cin >> imag;
    }
    void sumObjects(complex o1, complex o2) // using class objects as parameters
    {
        real = o1.real + o2.real;
        imag = o1.imag + o2.imag;
    }
    void printNum()
    {
        cout << "Entered complex number is " << real << " + i" << imag << endl;
    }
    void printSum()
    {
        cout << "Sum of complex numbers is " << real << " + i" << imag;
    }
};

int main()
{
    complex a, b, c;
    a.setData();
    a.printNum();
    b.setData();
    b.printNum();
    // passing class objects as arguments (arguments are real values while parameters are copies of arguments.)
    a.sumObjects(a, b); // or b.sumObjects(a,b) or c.sumObjects(a,b) will work
    a.printSum();       // or b.printSum() or c.printSum() will work
    return 0;
}