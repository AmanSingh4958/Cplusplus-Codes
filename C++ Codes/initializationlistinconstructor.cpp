#include <iostream>
using namespace std;

/*

Syntax for initialization list in constructor :
    constructor (argument-list) : initialization-list{
        constructor body;
    }

*/

class data{
    int d1;
    int d2;
    public:
        //data(int i, int j) : d1(i), d2(i + j) --> this line is correct
        //data(int i, int j) : d1(i), d2(2 * i) --> this line is correct and the value of passed to the constructor from main() will not be stored.
        //data(int i, int j) : d1(i), d2(d1 + j) --> this line is correct and gives the required output
        //data(int i, int j) : d2(j), d1(i) --> this line is also correct
        //data(int i, int j) : d2(j), d1(d2 + i) --> this line will not work as intended because d1 is defined first so it will be initialized first and then d2 but d1 is asking for value of d2 which is yet to be to initialized so d1 will have garbage value. This can be resovled when
        // int d2;
        // int d1;
        // --> now the above line will work as intended.
        data(int i, int j) : d1(i), d2(j){  // this line means d1 will store value passed to i and d2 will store value passed to j.
            cout<<"Constructor executed"<<endl;
            cout<<"The value of d1 : "<<d1<<endl;
            cout<<"The value of d2 : "<<d2<<endl;
        }
};

int main()
{
    data D(1, 3);
    return 0;
}