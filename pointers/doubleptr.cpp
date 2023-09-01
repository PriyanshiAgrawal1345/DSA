#include <iostream>
using namespace std;

void update(int **p){
    p=p+1;
    //kuch change? --NO

    *p=*p+1;
    //kuch change?  --YES(value in p1 will inc)

    **p=**p+1;
    //kuch change?  --YES(i will inc)
}

int main(){
    int i=5;
    int* p1=&i;
    int** p2=&p1;

    cout<<"printing p1(address of i) "<<p1<<endl;
    cout<<"value in i "<<*p1<<endl;
    cout<<"printing p2(address of p1) "<<p2<<endl;
    cout<<"value in p1 "<<*p2<<endl;
    cout<<"value in i "<<**p2<<endl;
    cout<<endl;

    //printing value in p1:-  3ways
    cout<<&i<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl<<endl;

    //printing address of block p1:- 2ways
    cout<<&p1<<endl;
    cout<<p2<<endl<<endl;



    //checking ki function k ander kya likha hua execute hota he aur kya nahi
    cout<<"--->"<<endl;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p1<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p1<<endl;
    cout<<"after "<<p2<<endl;

} 