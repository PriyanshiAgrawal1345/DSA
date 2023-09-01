#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    // Complete the class
    string name;
    int age;
    public:
    void setvalue(string name,int age){
        this->name=name;
        this->age=age;
    }
    void getvalue(){
        cout<<"The name of the person is "<<name<<" and the age is "<<age<<"."<<endl;
    }

};

int main() {

    //Write your code here
    string name;
    int age;
    cout<<"Enter name "<<endl;
    cin>>name;
    cout<<"Enter age "<<endl;
    cin>>age;
    Person p;
    p.setvalue(name,age);
    p.getvalue();
    return 0;
}