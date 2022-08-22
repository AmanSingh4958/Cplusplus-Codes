#include <iostream>
using namespace std;

// vector code but with template

template <class T>
class vector{
    T *arr;
    int size;
    public:
        T vectordisplay(); // function declaration
        // void vectordisplay(){
        //    for (int i = 0; i < 1; i++)
        //     {
        //         cout<<"Your entered vector :"<<arr[i]<<"x + "<<arr[i+1]<<"y +"<<arr[i+2]<<"z"<<endl;
        //     } 
        // };
        vector(){
            size = 3;
            arr = new T[size];    // creating a pointer array of size 3.
        }
        void getarr(){
            for (int i = 0; i < size; i++)
            {
                T b;
                cout<<"Enter the vector (must be in float): ";
                cin>>b;
                arr[i] = b;
            }  
            vectordisplay();
            cout<<endl;
        }

        T dotproduct(vector &v2){
            T dotproduct = 0;
            for (int i = 0; i < size; i++)
            {
                dotproduct += this->arr[i] * v2.arr[i];
            }
            return dotproduct;
        }
};

// Syntax for declaring a function outside a class using template
template <class T>
T vector<T> ::vectordisplay(){
    for (int i = 0; i < 1; i++)
        {
            cout<<"Your entered vector :"<<arr[i]<<"x + "<<arr[i+1]<<"y +"<<arr[i+2]<<"z"<<endl;
        }
        return 0;
}

int main()
{
    // auto x;
    // string s;
    // cout<<"Enter the data type of the vector you want (int, float, double) : ";
    // cin>>s;
    vector <float>v1; // here <float> means we are initialising the template T to be float
    v1.getarr();
    vector <float>v2;
    v2.getarr();
    auto x = v1.dotproduct(v2);
    cout<<"The Dot product of the vectors is "<<x<<endl;
    return 0;
}