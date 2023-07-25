#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void toh(int x, int a, int b, int c){
    if(x==0){
        return;
    }
    toh(x-1, a, c, b);
    cout<<x<<"["<<a<<"->"<<c<<"]"<<endl;
    toh(x-1, c, b, a);

}

int main(){
    int x;
    cin>>x;
    int a= 1;
    int b = 2;
    int c = 3;
    toh(x, a, b, c);
}