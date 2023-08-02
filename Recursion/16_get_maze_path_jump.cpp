#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void get_maze_path(int sr, int sc, int dr, int dc, string ans){
    if(sr==dr && sc == dc){
        cout<<ans<<endl;
        return;
    }
    for(int i = 1; i<=dr-sr; i++){
        get_maze_path(sr+ i, sc, dr, dc, ans+"h"+to_string(i));
    }
    for(int i = 1; i<=dc-sc; i++){
        // cout<<ans;
        get_maze_path(sr, sc+i, dr, dc,ans+ "v"+to_string(i));
    }
    for(int i = 1; i<=dr-sr && i<=sc-dc; i++){
        get_maze_path(sr+ i, sc+i, dr, dc, ans+"d"+to_string(i));
    }
    
}


int main(){
    int x, y;
    cin>>x>>y;
    get_maze_path(0, 0, x, y, "");
}