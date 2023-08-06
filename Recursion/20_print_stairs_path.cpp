#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_stairs_path(int n, string ans){
    if(n==0  || n<0){
        cout<<ans<<endl;
        return;
    }
    print_stairs_path(n-1, ans+"1");
    print_stairs_path(n-2, ans+"2");
    print_stairs_path(n-3, ans+"3");
}

int main(){
    int n;
    cin>>n;
    print_stairs_path(n, "");
}