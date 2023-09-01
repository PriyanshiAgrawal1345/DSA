//str consist of '{' or '}' if it is valid return 0
//if it is not valid you can perform operation like '{'-->'}' or viceversa
//cost of 1 change = 1
//Find total minimum cost
//if no repairing in invalid string is possible return -1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minCost(string s){
    int cost=-1;
    if((s.length())%2 != 0){
        return cost;
    }
    else{
        //total no.of brackets=even (it can be made valid)
        stack<char> st;
        //remove valid pairs using stack and calculating remaining open and close brackets
        int count_open=0;
        int count_close=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    count_close++;
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            count_open++;
            st.pop();
        }
        //there can be only 3 patterns left after removing valid pairs -->  1) }}}}..  2) {{{{... 3) ...}}}{{{{.. combination
        //deriving algorithm to find no.of bracket reversals == (a+1)/2 + (b+1)/2
        cost = (count_open+1)/2 + (count_close+1)/2;
        return cost;
    }

}

int main(){
    string str = "{{}}}}}}";
    cout<<"Minimum cost for valid string is :- "<<minCost(str);
}