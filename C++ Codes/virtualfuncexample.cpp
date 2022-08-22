#include <iostream>
using namespace std;
    
class Channel{
    protected:
        string title;
        float rating;
        public:
            Channel(string s, float r){
                title = s;
                rating = r;
            }
            virtual void display(){};   // we created a constructor of the base class because we know that if we want to create a constructor of the derived class then constructor of the base class is necessary (base class constructor is called before derived class constructor). We set the base class constructor virtual so that when we create a pointer of base class and point it to the object of the derived class then we will be able to use the member function / data of derived class. If we don't put virtual then the pointer (of base class pointing to object of derived class) will access the data members and fuctions of base class instead of derived class. So to avoid this virtual keyword is used.
};

class ChannelVideo : public Channel{
    string VideoTitle;
    float VideoLength;
    public:
        ChannelVideo(string s, float r, float vl, string a) : Channel(s, r){
            VideoTitle = a;
            VideoLength = vl;
        }
        void display(){
            cout<<"The Title of the channel : "<<title<<endl;
            cout<<"The Rating of the channel :"<<rating<<endl;
            cout<<"The Title of the video :"<<VideoTitle<<endl;
            cout<<"The Length of the video :"<<VideoLength<<endl;
        }
};

class ChannelText : public Channel{
    string Texttitle;
    int WordLength;
    public:
        ChannelText(string s, float r, string b, int x) : Channel(s, r){
            Texttitle = b;
            WordLength = x;
        }
        void display(){
            cout<<"The Title of the channel : "<<title<<endl;
            cout<<"The Rating of the channel :"<<rating<<endl;
            cout<<"The Title of the TextChannel :"<<Texttitle<<endl;
            cout<<"The Word length of the TextChannel :"<<WordLength<<endl;
        }
};

int main()
{
    ChannelVideo chv("Aman", 3.5, 14.39, "Virtual functions");
    ChannelText cht("Aman", 3.5, "Virtual Functions", 1200 );

    Channel* ch[2];
    ch[0] = &chv;
    ch[1] = &cht;
    ch[0]->display();
    cout<<endl<<endl;
    ch[1]->display();
    return 0;
}