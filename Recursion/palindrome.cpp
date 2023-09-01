//kept it case-sensitive

#include <iostream>
using namespace std;

bool checkpalindrome(string s,int start,int end){
    if(start>end){
        return true;
    }

    if(s[start++]==s[end--]){
        return checkpalindrome(s,start,end);
    }
    else{
        return false;
    }
}

int main(){
    string s="noonh";
    int end=s.length()-1;
    if(checkpalindrome(s,0,end)){cout<<"given string is palindrome";}
    else{cout<<"given string is not palindrome";}
}