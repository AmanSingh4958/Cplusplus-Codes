#include <iostream>
using namespace std;


// with the help of function template we don't have to write same functions for different data types
template <class T1, class T2>
T2 avg(T1 a, T2 b){
    float x = (a + b)/2;
    return x;
}

template <class T1, class T2>
void swapp(T1 &a, T2 &b){
    T1 temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout<<"The average of values passed : "<<avg(2, 2.4)<<endl<<endl;
    cout<<"Now running the swap function"<<endl;
    auto i = 2;
    auto j = 4.3;
    cout<<"Before Swapping"<<endl;
    cout<<"Value of i : "<<i<<endl;
    cout<<"Value of j : "<<j<<endl;
    cout<<endl;
    cout<<"After Swapping"<<endl;
    swapp(i , j);
    cout<<"Value of i : "<<i<<endl;
    cout<<"Value of j : "<<j<<endl;
    return 0;
}