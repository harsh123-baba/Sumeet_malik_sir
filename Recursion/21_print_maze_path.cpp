#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_maze_path(int sr, int sc, int dr, int dc, string ans){
    if(sr == dr && sc == dc){
        cout<<ans<<endl;
        return;
    }

    if(sr < dr){
        print_maze_path(sr+1, sc, dr, dc, ans+"h");
    }
    if(sc < dc){
        print_maze_path(sr, sc+1, dr, dc, ans+"v");
    }
}

int main(){
    int x, y;
    cin>>x>>y;
    print_maze_path(0, 0, x, y, "");

}