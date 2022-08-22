#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
// In case of inheritance, destructor of derived class is executed first then the base class.
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){  // Destructor defined here
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {   // this is block and it'll be destoryed when the compiler exits the block
        // compiler calls destructor to destruct the allocated memory for constructor when there is no need for the memory. 
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl; // destructor will be called for n2, n3 because there is no need for these objects to occupy memory.
    }
    cout<<"Back to main"<<endl; // destructor will be called for n1 because there is no need for memory allocated for n1.
    return 0;
}
