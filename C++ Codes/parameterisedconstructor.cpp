#include <iostream>
using namespace std;

class complex
{
    int real, imag;
    friend void printData(complex);

public:
    complex(int, int); // --> constructor
};

complex ::complex(int a, int b)   // --> this is a parameterised constructor.
{
    real = a;
    imag = b;
}

void printData(complex c1)
{
    cout << "The Complex number is " << c1.real << " + " << c1.imag << "i" << endl;
}

int main()
{
    // Implicit Call
    complex c1(4, 6); // arguments are also passed in parameterised constructor.
    printData(c1);

    // Explicit Call
    complex c = complex(8, 9);
    printData(c);
    return 0;
}