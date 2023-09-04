#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int grid_path(int n, int m){
    if(n==1 || m == 1){
        return 1;
    }
    int y = grid_path(n-1, m) + grid_path(n, m-1);
    return y;
}

int main(){
    int n, m;
    cin>>n>>m;
    cout<<grid_path(n, m)<<endl;
}