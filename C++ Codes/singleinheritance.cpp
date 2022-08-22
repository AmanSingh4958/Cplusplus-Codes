#include <iostream>
using namespace std;

class Base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base ::setData(){
    data1 = 10;
    data2 = 20;
}

int Base ::getData1(){
    return data1;
}

int Base ::getData2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
        void process();
        void display();
};
/*

If Derived class was inherited privately then we would not be able to use base class member functions directly in the main() section (i.e: we would not be able use setData() in the main() because then it would be a private member function of the derived class). So to use setData() we would have to call it inside some other function of derived class than main().
class Derived : private Base{
    int data3;
    public:
        void process();
        void display();
};

void Derived ::process(){
    setData();
    (Here we can use setData() because its a private member function of derived class and this 
     process() is also a member function of derived class.)
    data3 = data2 * getData1();
}

*/

void Derived ::process(){
    data3 = data2 * getData1(); // data1 can't be accessed directly because it wasn't inherited in the derived class (data1 is a private data member of Base class and private data members can't be inherited into derived class, so we used a function which is publically inherited from Base class to Derived class and this function returns value of data1).
}

void Derived ::display(){
    cout<<"The value of data1 is "<<getData1()<<endl;
    cout<<"The value of data2 is "<<data2<<endl; // data2 is publically inherited into derived class so we can access it.
    cout<<"The value of data3 is "<<data3<<endl;
}

int main()
{
    Derived derived;
    derived.setData();
    derived.process();
    derived.display();
    return 0;
}