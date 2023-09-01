#include <iostream>
using namespace std;

int main(){
    string s,part;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Enter the part of string to be removed"<<endl;
    cin>>part;
    // int len_s=s.size(),len_part=part.size();
    // int i=0;
    // while(i<len_s){
    //     int l=s.size();
    //     for(int j=0;j<l;j++){
    //         if(s[j]==part[0]){
    //         string temp=s.substr(j,len_part);
    //         if(temp==part){
    //             s.erase(j,len_part);
    //             }
    //         }
    //     }
    //     i++;
    // }
    // cout<<s;


    //another method
    while(s.length()!=0 && s.find(part)<=s.length()){
        s.erase(s.find(part),part.length());
    }
    cout<<s;
}