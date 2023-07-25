#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_occur(vector<int> v, int i, int n, int target){
    if(i == n){
        return -1;
    }
    if(v[i] == target){
        return i+1;
    }
    i = first_occur(v, i+1, n, target);
    return i+1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<first_occur(v, 0, v.size(), target);
}


