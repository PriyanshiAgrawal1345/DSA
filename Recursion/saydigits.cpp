#include <iostream>
using namespace std;

void saydigit(int num,string arr[]){
    if(num==0){
        return;
    }
    int digit=num%10;
    num=num/10;
    // cout<<arr[digit]<<" ";
    saydigit(num,arr);
 
     cout<<arr[digit]<<" ";
    }     

int main(){
    int number;
    cin>>number;
    string arr[10]={"zero","one","two","three","four","five"
                    ,"six" ,"seven" ,"eight" ,"nine"};
    saydigit(number,arr);
}
