#include <iostream>
using namespace std;
    
/*

Syntax for class template using multiple parameters:

template <class T1, class T2,.....> (COMMA SEPERATED)
class classname{
    body of class
};

*/

template <class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b) : data1(a), data2(b){}
        void display(){
            cout<<"Value of data1 : "<<this->data1<<endl; // this pointer is unnecessary
            cout<<"Value of data2 : "<<this->data2<<endl;
        }
};

int main()
{
    int x;
    string y;
    cout<<"Enter a value (int) : ";
    cin>>x;
    cout<<"Enter a value (char) : ";
    cin>>y;
    myClass <int, string> obj(x, y);
    obj.display();
    return 0;
}