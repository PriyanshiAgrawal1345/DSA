//string= char array

//get length
//reversing the string
//checking the string if it is palindrome

#include<iostream>
using namespace std;

int getlength(char name[]){
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);  //it will directly change in original array once called this function
    }
}

int main(){
    char name[20];
    cout<<"Enter your name:-"<<endl;
    cin>>name;             //difference between input in int array and ch. array

    cout<<"Your name is "<<name<<endl;
    // name[2]='\0';          //'\0' is null character used to show where the string gets ended
    // cout<<"Your name is "<<name<<endl;
    int len=getlength(name);
    cout<<"length of name array:- "<<len<<endl;

    reverse(name,len);
    cout<<"reversed name is "<<name<<endl;
//differnce between string and ch.array

// char name1[9]={'p','i','\0','y','u'};
// string name2="pi\0yu";
// cout<<name1<<"  "<<name2;
}