#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int memo_stair_path(int n, vector<int> qb){
    if(n == 0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(qb[n] > 0){
        return qb[n];
    }

    int x1 = memo_stair_path(n-1, qb);
    int x2 = memo_stair_path(n-2, qb);
    int x3 = memo_stair_path(n-3, qb);
    int x = x1+x2+x3;
    qb[n] = x;
    return x;
}


int tab_stair_path(int n){
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i = 1; i<=n; i++){
        if(i == 1){
            dp[i] = dp[i-1]; 
        }
        else if(i==2){
            dp[i] = dp[i-1] + dp[i-2];
        }
        else{
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int>qb(n+1, 0);
    // memoization path
    // int x = memo_stair_path(n, qb);
    // tabulor form
    int x = tab_stair_path(n);

    cout<<x;
}