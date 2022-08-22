#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){
 
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {19, 7, 14, 21, 50, 10};
    sort(arr,arr+5);    // this means sort from arr[0] to arr[5]. By default it sort in ascending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    sort( arr, arr+6, greater <int>( )); // this will sort the array in descending order (greater <int>() is a function object that will specify the sort to be in descending order)
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
