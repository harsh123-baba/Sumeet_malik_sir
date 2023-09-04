#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool pillindrome(string s){
    if(s.size() == 0 || s.size() == 1){
        return true;
    }
    if(s[0] == s[s.size()-1]){
        return pillindrome(s.substr(1, s.size()-2));
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    cout<<pillindrome(s)<<endl;
}
