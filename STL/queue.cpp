//first IN - first OUT

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Priyanshi");
    q.push("Sanjay");
    q.push("Agrawal");

    cout<<"size of stack "<<q.size()<<endl;

    cout<<"first element "<<q.front()<<endl;
    
    q.pop();
    cout<<"first element after 1 pop "<<q.front()<<endl;

    cout<<"size of stack "<<q.size()<<endl;

    cout<<"empty or not "<<q.empty()<<endl;

}