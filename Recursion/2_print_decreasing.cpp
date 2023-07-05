#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintDecreasing(int n){
    if(n == 0){
        return;
    }
    cout<<n<<endl;
    PrintDecreasing(n-1);
}

int main(){
    int n;
    cin>>n;
    PrintDecreasing(n);
}