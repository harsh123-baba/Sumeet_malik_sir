#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min_cost_path(vector<vector<int>>& maze){
    int n = maze.size();
    int m = maze[0].size();
    vector<vector<int>> dp(n, vector<int> (m, 0));
    
    // dp[n-1][m-1] = maze[n-1][m-1];
    for(int i = n-1; i>=0; i--){
        for(int j = m-1; j>-0; j--){
            if(i == n-1 && j == m - 1){
                dp[i][j] = maze[i][j];
            }
            else if(i == n-1){
                dp[i][j] = maze[i][j] + dp[i][j+1];
            } 
            else if(j == m-1){
                dp[i][j] = maze[i][j] + dp[i+1][j];
            }
            else{
                dp[i][j] = maze[i][j] + min(dp[i][j+1],dp[i+1][j]);
            }

        }
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<dp[i][j];
        }
        cout<<endl;
    }

    return dp[0][0];
}


int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> maze(n, vector<int> (m, 0));
    for(int i = 0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>maze[i][j];
        }
    }
    cout<<min_cost_path(maze);
}