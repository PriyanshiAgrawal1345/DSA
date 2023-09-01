//without using extra space (in-place)
//use replace function
//str1.replace(pos,len,str2)

#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i=0;
    int n=sizeof(s);
    string result="";
    while(i<n){
        while(i<n && s[i]==' '){
            i++;
        }
        if(i>n){break;}
        int j=i+1;
        while(j<n && s[j]!=' '){
            j++;
        }
        if(j>n){break;}
        string w=s.substr(i,j-i);
        if(j<n){
            result=result+w+"@40";
        }
        else{
            result=result+w;
        }
        i=j;
    }
    cout<<result;
}