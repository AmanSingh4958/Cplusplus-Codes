#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void swap(c1 &, c2 &);

public:
    void inData()
    {
        int a;
        cout << "Enter the 1st number = ";
        cin >> a;
        val1 = a;
    }
    void display(){
        cout<<"The value of 1st number = "<<val1<<endl;
    }
};

class c2
{
    int val2;
    friend void swap(c1 &, c2 &);

public:
    void inData()
    {
        int a;
        cout << "Enter the 2nd number = ";
        cin >> a;
        val2 = a;
    }
    void display(){
        cout<<"The value of 2nd number = "<<val2<<endl;
    }
};

void swap(c1 &o1, c2 &o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.inData();
    o2.inData();
    swap(o1, o2);
    cout<<"After Swapping"<<endl;
    o1.display();
    o2.display();
    return 0;
}