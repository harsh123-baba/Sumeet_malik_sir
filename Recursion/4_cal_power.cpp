#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Power(int n, int x){
    if(x==0){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    int y = n * Power(n, x-1);
    return y;
}

int main(){
    int n, x;
    cin>>n>>x;

    cout<<Power(n, x);
}