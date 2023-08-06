#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_subseq(string s , string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string rest_string = s.substr(1);
    print_subseq(rest_string, ans+ch);
    print_subseq(rest_string, ""+ans);
    return;
}


int main(){
    string s;
    cin>>s;
    print_subseq(s, "");
}