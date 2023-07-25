#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int x = n * factorial(n-1);
    return x;
}


int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}