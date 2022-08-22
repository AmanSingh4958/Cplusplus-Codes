// this code is an example of class template with multiple parameters

#include <iostream>
#include <stdio.h>
using namespace std;

template <class T, class U>
class Max{
    public:
        U mymax(T a, U b){
            return (a > b ? a : b);
            // this means return a if a > b else return b
            // just a short form of if else statement
        }
};

int main() {
    Max <int, double>x;
    int i;
    double j;
    cout<<"Enter the 1st number (in int) : ";
    cin>>i;
    cout<<"Enter the 2nd number (in float) : ";
    cin>>j;
    cout<<"Greater Number : "<<x.mymax(i, j);
    return 0;
}