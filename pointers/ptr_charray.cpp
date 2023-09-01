#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    //DIFF
    cout<<arr<<endl;    //gives address
    cout<<ch<<endl;     //gives value

    int *a=&arr[0];
    cout<<a<<endl;
    char *c=&ch[0];
    cout<<c<<endl;     //print entrie string and not address of first block
}