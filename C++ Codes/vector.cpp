#include <iostream>
using namespace std;

class vector{
    int *arr;
    int size;
    public:
        void vectordisplay();
        vector(){
            size = 3;
            arr = new int[size];    // creating a pointer array of size 3.
        }
        void getarr(){
            for (int i = 0; i < size; i++)
            {
                int b;
                cout<<"Enter the vector (must be in integer): ";
                cin>>b;
                arr[i] = b;
            }  
            vectordisplay();
            cout<<endl;
        }

        int dotproduct(vector &v2){
            int dotproduct = 0;
            for (int i = 0; i < size; i++)
            {
                dotproduct += this->arr[i] * v2.arr[i];
            }
            return dotproduct;
        }
};
void vector ::vectordisplay(){
    for (int i = 0; i < 1; i++)
        {
            cout<<"Your entered vector :"<<arr[i]<<"x + "<<arr[i+1]<<"y +"<<arr[i+2]<<"z"<<endl;
        }    
}

int main()
{
    int x;
    vector v1;
    v1.getarr();
    vector v2;
    v2.getarr();
    x = v1.dotproduct(v2);
    cout<<"The Dot product of the vectors is "<<x<<endl;
    return 0;
}