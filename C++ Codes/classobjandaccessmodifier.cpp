#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c; // by default class members are private.
public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData();
};

void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

void employee :: getData(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
}

int main()
{
    employee aman;
    aman.d = 4;
    aman.e = 5;
    aman.setData(1, 2, 3);
    aman.getData();
    return 0;
}