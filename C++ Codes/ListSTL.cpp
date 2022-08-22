#include <iostream>
#include <list>
using namespace std;

// There are many more operations which can be performed on the list with the functions pre defined in this list.
template <class T>
void display(list <T> &listSTL){
    cout<<"Displaying the list"<<endl;
    // list <T> :: iterator itr = listSTL.begin();
    typename list <T> :: iterator itr;
    // idk what is typename keyword and why is it required here but the code was not working without it
    itr = listSTL.begin();
    for (itr; itr != listSTL.end(); itr++)
    {
        cout<<(*itr)<<" ";
    }
    cout<<endl<<endl;
}

int main()
{
    list <int> list1; // List of 0 length
    // list <int> list2(7);  Empty list of size 7
    int size;
    cout<<"Enter the size of the list1 : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout<<"Enter the "<<i+1<<" element of the list : ";
        cin>>element;
        list1.push_back(element);
    }
    display(list1);
    cout<<"Removing Front, Back, some particular Element of list1"<<endl;
    cout<<"List1 before remove or pop operation"<<endl;
    display(list1);
    list1.pop_back();
    cout<<"List1 back element is popped"<<endl;
    list1.pop_front();
    cout<<"List1 front element is popped"<<endl;
    int num;
    cout<<"Enter the specific element you want to pop from list1 : ";
    cin>>num;
    list1.remove(num);
    display(list1);
    list1.sort();

    list <float> list2;
    cout<<"Enter the size of the list2 : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        float element;
        cout<<"Enter the "<<i+1<<" element of the list : ";
        cin>>element;
        list2.push_back(element);
    }
    display(list2);
    
    cout<<"Sorting and reversing List2"<<endl<<"List2 before sort and reverse operation :"<<endl;
    display(list2);
    cout<<"List2 after sort and reverse operation :"<<endl;
    list2.sort();
    list2.reverse();
    display(list2);
    list2.sort();

    // cout<<"Merging Both lists into list1"<<endl;
    // list1.merge(list2);   ---> this will only work when both lists are of same data type and are sorted also.
    // display(list1);
    return 0;
}