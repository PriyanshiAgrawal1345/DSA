#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TIME-COMPLEXITY = O(n)
//SPACE-COMPLEXITY = O(n)

void solve(stack<char>& s,int count,int mid){
    //base case
    if(count == mid){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    count++;
    solve(s,count,mid);
    s.push(temp);
}


int main(){
    string num = "12345";
    stack<char> s;
    for(int i=0;i<num.length();i++){
        s.push(num[i]);
    }
    while(s.empty() != true){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    for(int i=0;i<num.length();i++){
        s.push(num[i]);
    }
    int mid = s.size()/2+1;
    solve(s,1,mid);
    while(s.empty() != true){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}