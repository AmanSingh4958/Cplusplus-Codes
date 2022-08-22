#include <iostream>
using namespace std;

class BankDeposit{
    int principal, years;
    float interestRate, returnValue;

    public:
        BankDeposit(){} // creating default constructor that does nothing so that when objects of this class are made then compiler doesn't throw error due to lack of arguments at the time of declaring objects. so default constructor is needed.
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int R);
        void show();
};

BankDeposit ::BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    } 
}

BankDeposit ::BankDeposit(int p, int y, int R){
    principal = p;
    years = y;
    interestRate = float(R)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit :: show(){
    cout<<"Principal amount was "<<principal
        << "."<<endl<<"Return value after "<<years
        << " years is "<<returnValue<<endl;
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of principal, years and rate = ";
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of principal, years, and Rate = ";
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}