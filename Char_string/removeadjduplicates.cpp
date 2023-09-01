#include <iostream>
using namespace std;

string removeduplicates(string s){
    int i=0;
    while(i<s.length()){
        for(int j=0;j<s.length();j++){
            if(s[j]==s[j+1]){
                s.erase(j,2);
            }
        } 
        i++;      
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    cout<<removeduplicates(s);
}