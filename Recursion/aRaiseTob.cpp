#include <iostream>
using namespace std;

//requires b iteration
int power(int a,int b){
    if(b==0){
        return 1;
    }
    b--;
    return a*power(a,b);
}


//OPTIMISED SOLUTION
//b is even---> a^b/2 * a^b/2
//b is odd---> a * (a^b/2 * a^b/2)
int POWER(int a,int b){
    if(b==0){
        return 1;
    }
    int ans=POWER(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    if(b%2!=0){
        return a*ans*ans;
    }

}

int main(){
    int a,b;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"Enter the power"<<endl;
    cin>>b;
    cout<<"Answer"<<endl;
    cout<<power(a,b)<<endl<<endl;

    cout<<POWER(a,b)<<endl;
}