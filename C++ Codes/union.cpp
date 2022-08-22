#include <iostream>
using namespace std;

// union is used to share memory (i.e: only make one memory block which will contain the data )
union money
{
    int rice;
    char car;
    float pound;
};

int main(){
    union money m1;
    m1.rice = 34;
    cout<<"Value of m1.rice is "<<m1.rice<<endl;
    m1.car = 'c';
    // m1.rice is now overwritten with m1.car (now m1.car is used and m1.rice is nothing which means it will show garbage value)
    cout<<m1.rice<<" This is garbage value because it is overwritten by m1.car"<<endl;
    cout<<"Value of m1.car is "<<m1.car<<endl;
    return 0;
}