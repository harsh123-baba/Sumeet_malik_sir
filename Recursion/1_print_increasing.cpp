#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintIncreasing(int n){
    if(n==0){
        return;
    }
    PrintIncreasing(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    PrintIncreasing(n);
}