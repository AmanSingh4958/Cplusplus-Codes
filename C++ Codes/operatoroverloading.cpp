#include <iostream>
using namespace std;

// Operator Overloading to demonstrate difference of two complex numbers
// this code overloads a binary operator, we can use the same method to overload unary operators
class complex{
    int real, imag;
    public:
        void SetData(int, int);
        // complex difference(complex);
        complex operator-(complex);
        void Show();
};

void complex ::SetData(int a, int b){
    real = a;
    imag = b;
}

// this is a normal method to perform difference operation on two complex numbers
// complex complex ::difference(complex c){
//     complex temp;
//     temp.real = real - c.real;
//     temp.imag = imag - c.imag;
//     return temp;
// }

// this method is called operator overloading/
// to overload a operator, yhe keyword operator is used before it and then it is redefined just like a normal function.
// here the '-' operator is overloaded
complex complex ::operator-(complex c){
    complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}

void complex::Show(){
    cout<<real<<" + "<<imag<<"i"<<endl;
}

int main()
{
    complex c1, c2, c3;
    int a, b;
    cout<<"Enter the real part of the 1st complex number : ";
    cin>>a;
    cout<<"Enter the imaginary part of the 1st complex number : ";
    cin>>b;
    c1.SetData(a, b);
    cout<<"Enter the real part of the 2nd complex number : ";
    cin>>a;
    cout<<"Enter the imaginary part of the 2nd complex number : ";
    cin>>b;
    c2.SetData(a, b);
    // c3 = c1.difference(c2); calling the normal function to perform the difference
    c3 = c1 - c2;
    // c3 = c1.operator-(c2);  ---> this will give the same result as the above line
    c3.Show();
    return 0;
}