#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v, int i, int n){
    if(i == n){
        return;
    }
    cout<<v[i]<<endl;
    display(v, i+1, n);
}


int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    display(v, 0, v.size());
}