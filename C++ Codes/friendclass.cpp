// sum of complex numbers using friend function and friend class concepts

#include <iostream>
using namespace std;

class complex; // declaring class complex so that code does not throw error in code of class calculator.

class calculator
{
public:
    int sumRealComplex(complex, complex);
    int sumImagComplex(complex, complex);
};

class complex
{
    int real, imag;
    // declaring calculator class member functions as friend (if we had to declare many functions as friend then it would have been a problem, so we can also declare the whole calculator class as friend class of complex.
    // friend int calculator ::sumRealComplex(complex, complex);
    // friend int calculator ::sumImagComplex(complex, complex);
    friend class calculator;

public:
    void setData()
    {
        cout << "Enter the real part of the complex number = ";
        cin >> real;
        cout << "Enter the imaginary part of the complex number = ";
        cin >> imag;
    }
    void printNum()
    {
        cout << "Entered complex number is " << real << " + " << imag << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.real + o2.real);
}

int calculator ::sumImagComplex(complex o1, complex o2)
{
    return (o1.imag + o2.imag);
}

int main()
{
    complex o1, o2;
    calculator calc;
    o1.setData();
    o1.printNum();
    o2.setData();
    o2.printNum();
    int realres = calc.sumRealComplex(o1, o2);
    int imagres = calc.sumImagComplex(o1, o2);
    cout << "The sum of complex numbers = " << realres << " + " << imagres << "i";
    return 0;
}