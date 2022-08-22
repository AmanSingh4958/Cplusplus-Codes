#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int empId)
    {
        id = empId;
        salary = 0.0;
    }
    Employee() {}
};

/*

Derived Class Syntax :
class {{Derived-class-name}} : {{Visibility-mode}} {{Base-class-name}}
{
    class members/methods/etc.
}

Visibility-mode can be public/private.
By Default Visibility-mode is private.
Private Members of base-class are never inherited.
if public --> then public members of base-class gets derived into derived class as public members
              i.e: public members of base-class are also public members of derived class.
if private --> then public members of base-class gets derived into derived class as private members
              i.e: public members of base-class are private members of derived class.

*/

// Derived Class
class Programmer : public Employee
{
    // int id is now public member of Programmer class also because Visibility-mode of derived class is set to public.
    // creating a derived class calls the default constructor of base-class so it's necessary for base-class to have a default constructor.
public:
    int langcode = 9;
    Programmer(int empId)
    {
        id = empId;
    }
    void getData(string a)
    {
        cout << "Id of " << a << " is " << id << endl;
        // cout<<id<<endl;
    }
};

int main()
{
    // Employee aman, niharika;  This line will not work because there is no default constructor and we had created parameterised constructor in our class, so only declaring objects with no parameter will require a default constructor.

    Employee aman(1), niharika(2);
    cout << "Salary of aman is " << aman.salary << endl;
    cout << "Salary of niharika is " << niharika.salary << endl;

    Programmer aaman(0);
    string a = "aaman";
    cout << "Language code of aaman is " << aaman.langcode << endl;
    aaman.getData(a);
    return 0;
}