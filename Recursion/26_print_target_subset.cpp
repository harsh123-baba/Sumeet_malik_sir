#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_target_subset(vector<int> v, int idx, string asf, int sos, int target){
    if(idx == v.size()){
        if(sos == target){
            cout<<asf<<endl;
        }
            return;
    }
    print_target_subset(v, idx+1, asf+" "+to_string(v[idx]), sos+v[idx], target);
    print_target_subset(v, idx+1, asf, sos, target);
}


int main(){
    int x;
    cin>>x;
    vector<int> v(x);
    for(int i = 0; i<x; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;

    print_target_subset(v, 0, "", 0, target);
}