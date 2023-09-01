#include <iostream>
using namespace std;

string reverse(string s,int start,int end){
    if(start>end){
        return s;
    }
    swap(s[start++],s[end--]);
    return reverse(s,start,end);
}



//using LESS SPACE
void reverse1(string& s,int start){ //instead of end use e=n-1-s
    if(start>s.length()-1-start){
        return;
    }
    swap(s[start++],s[s.length()-1-start]);
    reverse1(s,start);
}




int main(){
    string s="priyanshi";
    cout<<reverse(s,0,s.length()-1)<<endl<<endl;

    reverse1(s,0);
    cout<<s<<endl;
}