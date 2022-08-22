#include <iostream>
using namespace std;
    
template <class T1 = int, class T2 = float>
class Aman{
    public:
        T1 a;
        T2 b;
        Aman(T1 x, T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout<<"The value of a : "<<a<<endl;
            cout<<"The value of b : "<<b<<endl;
        }
};

int main()
{
    Aman <> aa(20, 20.5); // if you want to use the default value of the class template then leave the angular brackets <> empty
    aa.display();
    cout<<endl<<endl;
    Aman <int, char> bb(20, 'H'); // if you want to use different data types then pass the data types in angular brackets <>
    bb.display();
    cout<<endl<<endl;
    string i = "Hi Idiots";
    Aman <int, string> cc(21, i);
    cc.display();
    return 0;
}