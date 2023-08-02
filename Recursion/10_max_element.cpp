#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int> v, int i, int idx){
    if(idx == v.size()){
        return i;
    }
    if(v[idx]>i){
        cout<<i;
        i = v[idx];
    }
    i = maxElement(v, i, idx++);
    return i;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    cout<<maxElement(v, INT_MIN, 0);
} 