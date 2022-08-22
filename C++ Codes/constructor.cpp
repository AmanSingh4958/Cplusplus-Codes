#include <iostream>
using namespace std;

class complex
{
    int real, imag;
    friend void printData(complex);
public:
    complex(void); // --> constructor
    // creating a constructor
    // constructor is a special member function with the same name as that of the class
    // it is used to initialise the objects of its class.
    // it is automatically invoked whenever the object of the class is created.
    // they should be declared in the public section of the class.
    // they don't have a return type.
    // they can have default parameters.
    // we can't refer to their addresses.
};

complex ::complex(void)   // --> this is a default constructor because it takes no parameters
{
    int a, b;
    string c;
    cout<<"Do you want to enter a complex number (Yes/yes/YES/No/no/NO) = ";
    // getline (cin, c); this line will take whitespaces as string too.
    cin>>c; // this line will not take whitespaces as string.
    if (c == "Yes" || c == "yes" || c == "YES")
    {
        cout<<"Enter the real part of complex number = ";
        cin>>a;
        cout<<"Enter the imaginary part of complex number = ";
        cin>>b;
        real = a;
        imag = b;
    }
    else if (c =="No" || c == "no" || c == "NO"){
        real = 0;
        imag = 0;
    }
    else{
        cout<<"Enter correct response!!"<<endl;
        real = 0;
        imag = 0;
    }
}

void printData(complex c1)
{
    cout << "The Complex number is " << c1.real << " + " << c1.imag << "i" << endl;
}

int main()
{
    complex c1; // constructor is also invoked automatically because it has same name as of class.
    printData(c1);
    return 0;
}