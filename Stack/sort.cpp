#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TIME-COMPLEXITY = O(n^2)
//SPACE-COMPLEXITY = O(n)

void sortedInsert(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    if(n > s.top()){
        s.push(n);
        return;
    }
    int temp = s.top();
    s.pop();
    sortedInsert(s,n);
    s.push(temp);
}

void sortStack(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    int n = stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack,n);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(7);
    s.push(4);
    s.push(9);
    sortStack(s);
    while(s.empty() != true){
        cout<<s.top()<<" ";
        s.pop();
    }
}