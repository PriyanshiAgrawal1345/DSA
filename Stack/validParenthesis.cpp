#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TIME-COMPLEXITY = O(n)
//SPACE-COMPLEXITY = O(n)

bool isValid(string p){
    stack<char> s;
    int c = 0;
    while(c < p.length()){
        if(p[c] == '(' || p[c] == '{' || p[c] == '[' ){
            s.push(p[c]);
        }
        if(p[c] == ')' || p[c] == '}' || p[c] == ']' ){
            if(s.empty()){
                return false;
            }
            else{
                s.pop();
            }
        }
        c++;
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string parenthesis = "{}([(){}]){";
    if(isValid(parenthesis)){
        cout<<"Parenthesis are balanced";
    }
    else{
        cout<<"Parenthesis are unbalanced";
    }
}