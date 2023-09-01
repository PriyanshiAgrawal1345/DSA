//non-sensitive to case (Noon and noon both are palindrome)
//consider only alphabets and numbers 
//ignore whitespaces and symbols (invalid characters)

//using character array

#include<iostream>
using namespace std;

int getlength(char name[]){
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
}

bool palindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s!=e){
        //if(name[s]== && name[e])
        if(tolowercase( a[s] ) != tolowercase( a[e] )){
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
    char name[20];
    cout<<"Enter your name:-"<<endl;
    cin>>name;
    int n=getlength(name);
    cout<<"is name palindrome? "<<endl;
    if(palindrome(name,n)){
        cout<<"name is palindrome"<<endl;
    }
    else{
        cout<<"name is not a palindrome"<<endl;
    }

}