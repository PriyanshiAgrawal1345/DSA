//return no.of first new modified characters in the input array

#include <iostream>
#include <vector>
using namespace std;

void stringcompression(char arr[]){
    int i=0;
    int answerindex=0;
    int n=sizeof(arr);
    while(i<n){
        int j=i+1;
        while(j<n && arr[j]==arr[i]){
            j++;
        }
        arr[answerindex++]=arr[i];
        if((j-i)>1){
            //converting counts into single digit
            string count=to_string(j-i);
            for(char ch:count){
                arr[answerindex++]=ch;
            }
        }
        i=j;
    }
    cout<<answerindex;
}

int main(){
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    stringcompression(arr);
}