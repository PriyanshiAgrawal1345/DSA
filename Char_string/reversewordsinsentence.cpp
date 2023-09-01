//"I am good"
//" I am good "
//"I   am good"

//"good am I"

#include <iostream>
using namespace std;

int main(){
    string s="  The   sky is blue ";
    int n=s.length();
    int i=0;
    string result="";
    while(i<n){
        while(i<n && s[i]==' '){
            i++;
        }
        if(i>=n){break;}
        int j=i+1;
        while(j<n && s[j]!=' '){
            j++;
        }
        if(j>=n){break;}
        string w=s.substr(i,j-i);
        result=w+" "+result;
        i=j;
    }
    cout<<result;

}


