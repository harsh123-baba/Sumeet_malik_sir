#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> subseq(string s){
    if(s.size() == 0){
        vector<string> blank_res;
        blank_res.push_back("");
        return blank_res;
    }
    char ch = s[0];
    string remaining_res = s.substr(1);
    vector<string> res = subseq(remaining_res);
    vector<string> ans;
    for(string x : res){
        ans.push_back(""+x);
        ans.push_back(ch+x);
    }
    return ans;
}


int main(){
    string s;
    cin>>s;
    vector<string> ans = subseq(s);
    for(string x : ans){
        cout<<x<<endl;
    }
}