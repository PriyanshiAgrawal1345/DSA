#include <bits/stdc++.h> 
using namespace std;
class Rectangle {
    // Write your code here.
    public:
    double length;
    double breadth;
    double getArea(){
        return length*breadth;
    }
};

int main(){
    Rectangle r;
    r.length=3;
    r.breadth=4;
    cout<<"Area of rectangle is "<<r.getArea()<<endl;
}