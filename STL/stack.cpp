//last IN - first OUT

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Priyanshi");
    s.push("Sanjay");
    s.push("Agrawal");

    cout<<"top element "<<s.top()<<endl;
    
    s.pop();
    cout<<"top element after 1 pop "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;

}