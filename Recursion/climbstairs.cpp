#include<iostream>
using namespace std;

int ways(int stairs){
    if(stairs==1){
        return 1;
    }
    if(stairs==2){
        return 2;
    }
    return ways(stairs-1)+ways(stairs-2);
}

int main(){
    int stairs;
    cin>>stairs;
    cout<<ways(stairs)<<endl;
}