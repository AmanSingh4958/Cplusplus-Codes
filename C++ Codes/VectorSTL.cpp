#include <iostream>
#include <vector>
using namespace std;

// generalising the data type of the vector passed.
template <class T>
void display(vector <T> &vec){
    cout<<"Displaying The Vector"<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    } 
    cout<<endl;
}

int main()
{
    vector <int> vec1;
    int size;
    cout<<"Vector vec1 is int type"<<endl;
    cout<<"Enter the size of the vector vec1 : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout<<"Enter the "<<i+1<<" element of the vector vec1 (int) : ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);

    vector <float> vec2;
    cout<<"Vector vec2 is float type"<<endl;
    cout<<"Enter the size of the vector vec2 : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        float element;
        cout<<"Enter the "<<i+1<<" element of the vector vec2 (float) : ";
        cin>>element;
        vec2.push_back(element);
    }
    display(vec2);

    cout<<"Poping the last element of Vector vec2"<<endl;
    vec2.pop_back();
    // cout<<"Vector after poping the last element"<<endl;
    display(vec2);
    
    // declaring a vector iterator (iterators are just like pointers which is used to access data of the vectors)
    vector <float> ::iterator point = vec2.begin();
    vec2.insert(point+1, 2.2); // inserting 2.2 in vec2 at 2nd position because point has the 1st position, so point+1 will be 2nd position.
    cout<<endl;
    display(vec2);

    // more on vectors
    // vector<int> vec1;            zero length integer vector
    // vector<char> vec2(4);        4-element character vector
    // vector<char> vec3(vec2);     4-element character vector from vec2
    // vector<int> vec4(6,3);       6-element vector of 3s
    return 0;
}