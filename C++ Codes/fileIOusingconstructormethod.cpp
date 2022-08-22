#include <iostream>
#include <fstream>
using namespace std;

 /*
File I/O in C++: Reading and Writing Files :
    These are some useful classes for working with files in C++ :
        1. fstreambase
        2. ifstream --> derived from fstreambase
        3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
    1. Using the constructor
    2. Using the member function open() of the class
 */

// This code is an example of File handling using constructor method

int main(){
    string st1 = "Hey, I'm Aman";
    string st2;
    string st3;
    // Opening files using constructor and writing it
    ofstream out("sample.txt"); // Write operation (Use ofstream to write into the file.)
    // if there is no file named "sample.txt", then it'll create one.
    out<<st1 + "\n";
    cout<<"Enter your name = ";
    cin>>st3;
    out<<st3 + " is an idiot";
    out.close(); // closing the "sample1.txt" file

    // closing a file is important so that next operations on the same file can take place. If file is not closed after a operation and other operations are being performed on it then the operations on the file might not work well.

    // Opening file using constructor and reading it
    ifstream in("sample.txt");
    // if there is no file named "sample.txt", then nothing will appear on the output screen and no other file will be created automatically.
    // in>>st2; this line will store the first string of the file into st2
    // cout<<st2;

    // To get a whole line of string from the file, use getline() and to get the next line of string which is present on new line use getline() again.
    getline(in, st2);
    cout<<st2<<endl;
    getline(in, st2);
    cout<<st2;
    in.close();
    return 0;
}