#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int possible_comb(int n, int m){
    if(n == 0){
        return 1;
    }
    else if(m == 0 || n < 0){
        return 0;
    }
    int y =  possible_comb(n-m,m) + possible_comb(n, m-1);
    return y;
}


int main(){
    int n, m;
    cin>>n>>m;
    cout<< possible_comb(n, m);
}