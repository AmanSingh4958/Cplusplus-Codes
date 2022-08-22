#include <iostream>
#include <map>
#include <string>
using namespace std;


// Map is a structure that works similar to a python dictionary i.e: It stores a key and it's value
// Working of Map is shown in the code below

void display(map <string, int> &MapMarks){
    cout<<"Displaying the MapMarks :"<<endl;
    map <string, int> :: iterator i;
    for ( i = MapMarks.begin(); i != MapMarks.end(); i++)
    {
        cout<<"Name : "<<(*i).first<<endl<<"Marks : "<<(*i).second<<endl;
        // (*i).first ---> key value of MapMarks
        // (*i).second ---> value of key
    }
    cout<<endl;
}

int main()
{
    cout<<"                         Students Marks Map"<<endl;
    map <string, int> MapMarks; // Map stucture is made of Name MapMarks which has Keys as string and the values as int.

    int size;
    cout<<"Enter the size of MapMarks : ";
    cin>>size;

    // storing values in the Map.
    for (int i = 0; i < size; i++)
    {
        string name;
        cout<<"Enter the name of "<<i+1<<" student : ";
        getchar(); // it is used so that the getline() takes the user input in name (without getchar(), the program was not taking user input instead it was storing newline/space in the name string)
        getline(cin, name); // takes name as input including the whitespaces
        // cin>>name; // takes name as input not including the whitespaces.
        int marks;
        cout<<"Enter the marks of "<<i+1<<" student : ";
        cin>>marks;
        MapMarks[name] = marks; // saves the marks for the particular student
    }
    cout<<endl;
    
    // displaying MapMarks
    display(MapMarks);

    // We can also insert new keys and values into the map using insert().
    MapMarks.insert({{"Idiot", 34}, {"Big Idiot", 2}}); // proper parenthesis is required for the insert().

    cout<<"Displaying MapMarks after inserting new values :"<<endl;
    display(MapMarks);

    // There are many other functions and operations that can be performed on the Map.
    
    return 0;
}