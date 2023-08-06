#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> codes = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};


void key_pad_comb(string s, string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string rstr = s.substr(1);
    string codeforch = codes[ch-'0'];
    for(int i = 0; i< codeforch.size(); i++){
        char cho = codeforch[i];
        key_pad_comb(rstr, ans+cho);
    }
}

int main(){
    string s;
    cin>>s;
    key_pad_comb(s, "");
}