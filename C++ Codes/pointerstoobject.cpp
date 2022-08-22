#include <iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
        void getData(){
            cout<<"Enter the value of real = "<<real<<endl;
            cout<<"Enter the value of imaginary = "<<imag<<endl;
        }
        void setData(int a, int b){
            real = a;
            imag = b;
        }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1; // ptr is a pointer that points to the address of c1 object
    Complex *ptr = new Complex; // new keyword can also be used to create an object
    (*ptr).setData(3, 4); // dereferencing ptr to access the data members and functions of the class.
    // ptr->setData(3, 4); // arrow operator can also be used to dereference the pointer.
    (*ptr).getData();
    // ptr->getData();
    return 0;
}