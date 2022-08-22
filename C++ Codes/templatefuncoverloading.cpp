#include <iostream>
using namespace std;

void func(int a){
    cout<<"This is normal func"<<endl;
}

template <class T>
void func(T a){
    cout<<"This is templatised func"<<endl;
}

int main()
{
    func(4); // Exact match for the data types in the function declaration takes the priority 
    // i.e: function taking int as data type will run not the template function.

    func('c'); // this time templatised func will run because the normal func takes int as argument.
    // if we were to define another function named same as templatised function and it took char data
    // type as argument then it'll be the one to run instead of the templatised function.
    return 0;
}