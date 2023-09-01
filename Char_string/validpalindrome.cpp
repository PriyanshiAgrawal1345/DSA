//non-sensitive to case (Noon and noon both are palindrome)
//consider only alphabets and numbers 
//ignore whitespaces and symbols (invalid characters)

//using string

#include<iostream>
using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
}

string valid(string s){
    string temp;
    for(int i=0;i<s.length();i++){
        if((s[i]<='z' && s[i]>='a') || (s[i]<='Z' && s[i]>='A') || (s[i]<=9 && s[i]>=0)){
            temp.push_back(s[i]);
        }
    }
    return temp;
}

bool validpalindrome(string st){
    st=valid(st);
    int s=0;
    int e=st.length()-1;
    while(s>e){
        if(tolowercase( st[s] ) != tolowercase( st[e] )){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

int main(){
    string input;
    cout<<"Enter your input:-"<<endl;
    cin>>input;
    cout<<"is input palindrome? "<<endl;
    if(validpalindrome(input)){
        cout<<"name is palindrome"<<endl;
    }
    else{
        cout<<"name is not a palindrome"<<endl;
    }

}