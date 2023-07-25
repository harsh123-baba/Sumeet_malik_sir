#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse_array(vector<int> v, int i, int n){
    if(i == n){
        return;
    }
    reverse_array(v, i+1, n);
    cout<<v[i]<<endl;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    reverse_array(v, 0, v.size());
}