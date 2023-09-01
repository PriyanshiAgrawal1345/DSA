//s and p are in lowercase

#include <iostream>
using namespace std;

bool checkEqual(int arr1[26],int arr2[26]){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}

bool permutation(string s,string p){
    int arr1[26]={0};
    for(int i=0;i<p.length();i++){
        arr1[p[i]-'a']++;
    }
    int i=0;
    while((i+p.length())<=s.length()){
        int arr[26]={0};
        for(int j=i;j<i+p.length();j++){
            arr[s[j]-'a']++;
        }
        if(checkEqual(arr,arr1)){
            return 1;
        }
        i++;
    }
    return 0;
}

int main(){
    string s,p;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Enter the string whose permutation is to be found"<<endl;
    cin>>p;

    if(permutation(s,p)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}