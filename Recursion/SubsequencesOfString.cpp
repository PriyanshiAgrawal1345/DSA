//return non-empty subsequences of string

#include <iostream>
#include <vector>
using namespace std;

void solve(string s,int index,string output,vector<string>& ans){
    if(index>=s.length()){
        if(output.length()>0){
            ans.push_back(output);
        }
        return;
    }
    //exclude
    solve(s,index+1,output,ans);
    //include
    output+=s[index];
    solve(s,index+1,output,ans);
}

int main(){
    string s="abc";
    string output="";
    vector<string>ans;
    int index=0;
    solve(s,index,output,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}