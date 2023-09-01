#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(N)

bool redundantBrackets(string exp){
    stack<char> s;
    for(int i=0;i<exp.length();i++){
        char temp = exp[i];
        if(temp == '(' || temp == '+' || temp == '-' || temp == '/' || temp == '*'){
            s.push(temp);
        }
        if(temp == ')'){
            if(s.top() == '+' || s.top() == '-' || s.top() == '/' || s.top() == '*'){
                while(s.top() != '('){
                    s.pop();
                }
                s.pop();
            }
            else{
                return true;
            }
        }
    }
    if(s.empty()){
        return false;
    }
}

int main(){
    string expression = "(((a + b) * (a / b)))";
    if(redundantBrackets(expression)){
        cout<<"Expression consist redundant brackets"<<endl;
    }
    else{
        cout<<"Expression doesn't consist redundant brackets"<<endl;
    }
}
