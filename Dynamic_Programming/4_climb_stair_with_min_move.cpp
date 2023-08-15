#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int stairs_with_min_move(int n, vector<int> jump){
    vector<int> dp(n+1, -1);
    dp[n] = 0;

    for(int i = n-1; i >= 0; i--){
        if(jump[i] > 0){
            int minimum = INT32_MAX;
            for(int j = 1; j <= jump[i] && i+j < dp.size(); j++){
                if(dp[i+j] != -1){
                    minimum = min(dp[i+j], minimum);
                }
            }
            if(minimum != INT32_MAX){
                dp[i] = minimum + 1;
            }            
        }
    }
    return dp[0];
}


int main(){
    int n;
    cin>>n;
    vector<int> jump(n, 0);
    for(int i = 0; i<n; i++){
        cin>>jump[i];
    }
    cout<<stairs_with_min_move(n, jump);
}