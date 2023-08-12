#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_encoding(string s, string ans){
   if(s.size() == 0){
      cout<<ans<<endl;
      return;
   }
   else if(s.size() == 1){
      if(s[0] == '0'){
         return;
      }
      else{
         char ch = s[0];
         int chv = ch-'0';
         char code = (char) ('A' + chv -1);
         // ans = ch - '0' +'A'-1;
         cout<<ans+code<<endl;
      }
   }
   else{
      if(s[0] == '0'){
         return;
      }
      else{
         char ch = s[0];
         int chv = ch-'0';
         char code = (char) ('A' + chv - 1);
         // ans += ch - '0' +'A'-1;
         string rest_string = s.substr(1);
         print_encoding(rest_string, ans+code);
      }
      string ch12 = s.substr(0, 2);
      string rest_12 = s.substr(2);
      int ch12Val = stoi(ch12);
      if(ch12Val <= 26){
         char code = (char)('A'+ch12Val-1);
         print_encoding(rest_12, ans+code);

      }

   }
}


int main(){
   string s;
   cin>>s;
   print_encoding(s, "");
}