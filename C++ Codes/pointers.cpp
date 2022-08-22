#include <iostream>
using namespace std;

int main()
{
    // Basic example of pointers
    int a;
    int *ptr;
    ptr = &a;
    *ptr = 3;
    cout<<"The value of a is "<<*ptr<<endl;
    delete ptr; // this line will not delete the memory allocated because the memory is static and present on stack not on heap (dynamic memory is present on heap)
    cout<<"The value of a stored in stack memory after using delete is "<<*ptr<<endl<<endl;

    // new keyword (used to dynamically allocate memory)
    // int *p = new int (40); --> this line means to store 40 at the allocated address of p
    float *p = new float(49.53);    // there can be more examples
    cout<<"The value stored at address of p is "<<*p<<endl;
    delete p;
    cout<<"The value stored at address of p after using delete is "<<*p<<endl<<endl;

    // dynamically initializing an array using new keyword
    int *arr= new int[3]; // memory for array of 3 integers is initialized at the address of arr
    arr[0] = 12;
    *(arr+1) = 13;
    arr[2] = 14;
    cout<<"Value of arr[0] is "<<*arr<<endl;
    cout<<"Value of arr[1] is "<<*(arr + 1)<<endl;
    cout<<"Value of arr[2] is "<<*(arr + 2)<<endl;

    // delete keyword (used to delete only dynamically allocated memory (i.e: memory allocated with help of new/malloc etc))
    // delete keyword always ask for a pointer or array argument.
    delete arr;
    cout<<"Value of arr[0] after delete keyword is "<<*arr<<endl;
    cout<<"Value of arr[1] after delete keyword is "<<*(arr + 1)<<endl;
    cout<<"Value of arr[2] after delete keyword is "<<*(arr + 2)<<endl;
    return 0;
}