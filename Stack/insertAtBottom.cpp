#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s,int n){
    //base case
    if(s.empty()){
        s.push(n);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s,n);
    s.push(temp);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Enter a element"<<endl;
    int n;
    cin>>n;
    insertAtBottom(s,n);
    int size=s.size();
    for(int i=0;i<size;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}