#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TIME-COMPLEXITY = O(n^2)
//SPACE-COMPLEXITY = O(n)

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

void reverse(stack<int>& s){
    if(s.empty()){
        return;
    }
    int n = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,n);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverse(s);
    while(s.empty() != true){
        cout<<s.top()<<" ";
        s.pop();
    }
}