#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reverse_string(string s){
    if(s.size() == 0){
        return "";
    }
    return reverse_string(s.substr(1)) + s[0];
}
int main(){
    string s;
    cin>>s;
    cout<<reverse_string(s);
}