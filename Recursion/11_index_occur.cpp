#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int last_occur(vector<int>v, int idx, int target){
    if(idx == v.size()){
        return -1; 
    }
    int lisa = last_occur(v, idx+1, target);
    if(lisa == -1){
        if(v[idx] == target){
            return idx;
        }
        else{
            return -1;
        }
    }
    return lisa;

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
    cout<<last_occur(v, 0, target);

}