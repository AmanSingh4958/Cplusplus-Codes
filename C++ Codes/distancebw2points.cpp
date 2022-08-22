// this code is to calculate distance between two points using parameterised constructer

#include <iostream>
#include <cmath>
using namespace std;

class points
{
    int x1, y1, x2, y2;

public:
    points(int, int, int, int);
    void displayDistanceBwPoints(float);
    friend float distanceBwPoints(points);
};

points ::points(int a, int b, int c, int d)
{
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
}

float distanceBwPoints(points point)
{
    float distance;
    distance = sqrt(double(((point.x2 - point.x1) * (point.x2 - point.x1)) + ((point.y2 - point.y1) * (point.y2 - point.y1))));
    // cout<<distance<<endl;
    return distance;
}

void points ::displayDistanceBwPoints(float result)
{
    cout<<"The distance between the points is "<<result;
}

int main()
{
    int a, b, c, d;
    float result;
    cout<<"Enter the 1st pair of coordinates seperated with single space = ";
    cin>>a>>b;
    cout<<"Enter the 2nd pair of coordinates seperated with single space = ";
    cin>>c>>d;

    points point(a, b, c, d); // parameterised constructor invoked
    result = distanceBwPoints(point);
    point.displayDistanceBwPoints(result);
    return 0;
}