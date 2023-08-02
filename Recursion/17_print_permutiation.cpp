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
        string qlpart = s.substr(0, i);
        string qrpart = s.substr(i+1);
        string roq = qlpart + qrpart;
        permutation(roq, ans+ch);

    }
}



int main(){
    string s;
    cin>>s;
    permutation(s, "");

}