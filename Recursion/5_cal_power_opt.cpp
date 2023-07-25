#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Power(int n, int x){
    if(x==0){
        return 1;
    }
    if(n==1){
        return 0;
    }
    int nx2 = Power(n, x/2);
    int nx = nx2 * nx2;
    if(x%2 == 1){
        nx = nx * n;
    }
    return nx;
}


int main(){
    int n, x;
    cin>>n>>x;
    cout<<Power(n, x);

}