#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> qb){
    if(n == 0 || n == 1){
        return n;
    }
    if(qb[n] != 0){
        return qb[n];
    }

    int fib1 = fib(n-1, qb);
    int fib2 = fib(n-2, qb);
    int fibv = fib1 + fib2;
    qb[n] = fibv;
    return  fibv;
}


int main(){
    int n;
    cin>>n;
    vector<int> qb(n+1, 0);
    cout<<fib(n, qb);
}