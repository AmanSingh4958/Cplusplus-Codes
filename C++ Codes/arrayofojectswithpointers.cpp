#include <iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"Id of item : "<<id<<endl;
            cout<<"Price of item : "<<price<<endl;
        }
};

int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp;
    ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the Id of the item : ";
        cin>>p;
        cout<<"Enter the Price of the item : ";
        cin>>q;
        cout<<endl;
        ptr->setData(p, q);
        ptr++; // we made ptrTemp because at the end of this for loop, ptr will be pointing to some other address than the first object of the array and we need address of the first object stored in array for the other loop written below.
    }
    for (int i = 0; i < size; i++)
    {
        (ptrTemp + i)->getData();
        cout<<endl;
        // ptrTemp->getData(); __
        // ptrTemp++;          __-> these lines will also work same as the above line. 
    }
    
    return 0;
}