#include <iostream>
#include <string.h>
using namespace std;

/*
Inheritance :
Student --> Test
Student --> Sports
Test --> Result
Sports --> Result

when result class is derived from test and sports classes which were derived from student class, then result class will get ambigious due to duplicate data members of class students which will be derived from test and score (i.e: in this case roll_no and other member functions will make the result class ambigious because both test and score classes contain this data member and result class upon derivation from test and score class will get the same roll number data member twice ). So to remove this ambiguity virtual base class is used. Here student class is made virtual base class in derivation of test and result so that duplication of data member on further derivation will not occur.

*/

class Student{
    protected:
        int roll_no;
        string name;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void set_name(string x){
            name = x;
        }
        void print_name(){
            cout<<"Your Name is "<<name<<endl;
        }
        void print_number(){
            cout<<"Your Roll Number is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1 , float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"Your Result is:"<<endl
            <<"Maths : "<<maths<<endl
            <<"Physics : "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your PT Score : "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_name();
            print_number();
            print_marks();
            print_score();
            cout<<"Your Total Score : "<<total<<"/210"<<endl;
        }
};

int main()
{
    Result aman;
    aman.set_number(1);
    aman.set_name("Aman Kumar Singh");
    aman.set_marks(98, 95);
    aman.set_score(9);
    aman.display();
    return 0;
}