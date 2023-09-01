#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TIME-COMPLEXITY = O(n)
//SPACE-COMPLEXITY = O(n)

int main(){
    string name = "Priyanshi";
    stack<char> s;
    for(int i=0;i<name.length();i++){
        s.push(name[i]);
    }
    string ans="";
    while(s.empty() != true){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<ans;
}