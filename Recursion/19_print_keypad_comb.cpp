#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<string> codes = {".,", "abc", "def", "ghi", "jhl", "mno", "pqrs", "tuv", "wxyz"};


void print_keypad_comb(string s, string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string rest_string = s.substr(1);
    string code_for_ch = codes[ch-'0'];
    for(int i = 0; i<code_for_ch.size(); i++){
        char cho = code_for_ch[i];
        print_keypad_comb(rest_string, ans+cho);
    }
}

int main(){
    string s;
    cin>>s;
    print_keypad_comb(s, "");
}