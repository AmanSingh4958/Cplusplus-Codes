/*
This is an example of multilevel inheritance where Student is the base-class , Exam is a derived-class
which is derived from the Student class. while Result is also a derived-class which is derived from its
base-class (Exam class).
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number(void)
{
    cout << "Roll Number of the student is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks(void)
{
    cout << "Marks obtained in maths is " << maths << endl;
    cout << "Marks obtained in physics is " << physics << endl;
}

class Result : public Exam
{
private:
    float percentage;

public:
    void display_result();
};

void Result ::display_result()
{
    percentage = (maths + physics) / 2;
    get_roll_number();
    get_marks();
    cout << "Student percentage is " << percentage << " %" << endl;
}

int main()
{
    Result Aman;
    Aman.set_roll_number(1);
    Aman.set_marks(91.0, 92.0);
    Aman.display_result();
    return 0;
}