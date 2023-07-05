#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Factorial(int n){
    if(n==0){
        return 1;
    }
    int x = n* Factorial(n-1);
    return x;
}
int main(){
    int n;
    cin>> n;
    cout<<Factorial(n);
}