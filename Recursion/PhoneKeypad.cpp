#include<iostream>
#include<vector>
using namespace std;

void solve(string num,int index,string arr[],string output,vector<string>& ans){
    if(index>=num.length()){
        ans.push_back(output);
        return;
    }
    int number=num[index]-'0'; //it will give difference in integer
    string value=arr[number];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(num,index+1,arr,output,ans);
        output.pop_back();
    }
}


int main(){
    string num="34";
    string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    string output="";
    int index=0;
    
    if(num.length()==0){
        cout<<"num is empty"<<endl;
    }else{
        solve(num,index,arr,output,ans);
        for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        }
    }
}