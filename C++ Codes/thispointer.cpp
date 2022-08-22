#include <iostream>
using namespace std;

// 'this' is a keyword which is a pointer which points to the object which is used to invoke a member function. this pointer also return the object which called the member function, so this pointer can also be used in chaining of object.

class A{
    int a;
    public:
        // void setData(int a){
        A & setData(int a){ // this line is used so that this pointer returns the object of class 'A' instead of void.
            // a = a; // this line will not assign the passed value to 'a', instead it'll show garbage value.
            this->a = a; // this line will assign the passed value to 'a'
            return *this; // it will return the object to which it was pointing
        }
        void getData(){
            cout<<"The value of a : "<<a<<endl;
        }
};
int main()
{
    A a1, a2;
    (a1.setData(4)).getData(); // this is chaining of objects (at first a.setData() was called which set the value of a to 4 using this pointer, then this pointer returned the object to the function call, so now getData() can be used in chain because now a.setData()==a 
    // i.e: a.setData(4).getData() == a.getData() )
    // a.getData();

    a2.setData(5).getData();
    return 0;
}