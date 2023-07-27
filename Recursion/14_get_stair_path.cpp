#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> get_path(int n){
    if(n== 0){
        vector<string> bres; 
        bres.push_back("");
        return bres;
    }
    else if(n<0){
        vector<string>bres;
        return bres;
    }
    vector<string> paths1 = get_path(n-1);
    vector<string> paths2 = get_path(n-2);
    vector<string> paths3 = get_path(n-3);
    vector<string> paths;
    for(string x : paths1){
        paths.push_back('1'+x);
    }
    for(string x : paths2){
        paths.push_back('2'+x);
    }
    for(string x : paths3){
        paths.push_back('3'+x);
    }
    return paths;

}


int main(){
    int n;
    cin>>n;
    vector<string> paths = get_path(n);
    for(int i = 0; i<paths.size(); i++){
        cout<<paths[i]<<endl;
    }
}