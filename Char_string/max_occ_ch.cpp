#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;                      //cin stops execution when i)space  ii)tab  iii)enter
    int n=sizeof(s);                         //cin.getline(string,len)   it works on char array
    int arr[26]={0};                         //getline(cin,string)   works on string
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            arr[s[i]-'a']++;
        }
        if(s[i]>='A' && s[i]<='Z'){
            arr[s[i]-'A']++;
        }
    }
    char temp='a';
    int maxcount=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxcount){
            maxcount=arr[i];
            temp='a'+i;
        }
    }
    cout<<"The maximum occuring character in string is:- "<<temp;


}