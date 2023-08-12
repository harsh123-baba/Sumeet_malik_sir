#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permutation(string s, string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }

    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        string l_part = s.substr(0, i);
        string r_part = s.substr(i+1);
        string rest_string = l_part+r_part;    

        permutation(rest_string, ans+ch);
    }
}

int main(){
    string s;
    cin>>s;
    permutation(s,"");
}