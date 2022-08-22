#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);
public:
    void read(void);
    void onescompliment(void);
    void display(void);
};

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Wrong Binary Format"<<endl;
            exit(0);
        }
    }
}

void binary :: read(void){
        cout<<"Enter the binary number = ";
        cin>>s;
}

void binary :: onescompliment(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
        else
            s.at(i) = '0';
    }
}

void binary :: display(void){
    chk_bin(); // nesting chk_bin() member function.
    cout<<"Your Binary Number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    // cout<<"Binary Number after Ones compliment"<<endl;
    b.onescompliment();
    b.display();
    return 0;
}