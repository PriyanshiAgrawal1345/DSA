/*(0,0)--->(N-1,N-1)  (square matrix)
  (i,j)--->(m,n)

SAFE TO MOVE
1---> (m,n) should be inside matrix
2---> value at (m,n) in maze=1
3---> value at (m,n) in visited=0

ONCE MOVED
---> mark (m,n) at visted=1

AFTER RETURNING FUNCTION
---> mark visted =0
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool readyToMove(int n,vector<vector<int>>maze,int x,int y,vector<vector<int>> visited){
    if((x>=0 && x<=n-1) && (y>=0 && y<=n-1) && maze[x][y]==1 && visited[x][y]==0){
        return true;
    }
    else{return false;}
}

void solve(int n,vector<vector<int>>maze,int x,int y,string path,vector<vector<int>> visited,vector<string>& ans){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
    //4 choices D,L,R,U
    //DOWN
    int newx=x+1;
    int newy=y;
    if(readyToMove(n,maze,newx,newy,visited)){
        path.push_back('D');
        solve(n,maze,newx,newy,path,visited,ans);
        path.pop_back();
    }
    //LEFT
    newx=x;
    newy=y-1;
    if(readyToMove(n,maze,newx,newy,visited)){
        path.push_back('L');
        solve(n,maze,newx,newy,path,visited,ans);
        path.pop_back();
    }
    //RIGHT
    newx=x;
    newy=y+1;
    if(readyToMove(n,maze,newx,newy,visited)){
        path.push_back('R');
        solve(n,maze,newx,newy,path,visited,ans);
        path.pop_back();
    }
    //UP
    newx=x-1;
    newy=y;
    if(readyToMove(n,maze,newx,newy,visited)){
        path.push_back('U');
        solve(n,maze,newx,newy,path,visited,ans);
        path.pop_back();
    }

    visited[x][y]=0;
}

int main(){
    vector<vector<int>>maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int n=maze.size();
    vector<vector<int>>visited=maze;
    //replacing its values by zero
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    vector<string>ans;
    int srcx=0;
    int srcy=0;
    string path="";

    if(maze[0][0]==0){
        cout<<"Rat cannot reach its final destination"<<endl;
    }
    else{
        solve(n,maze,srcx,srcy,path,visited,ans);
        //texicographically increasing
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
    }                       
}