#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_maze_path_with_jump(int sr, int sc, int dr, int dc, string ans){
    if(sr == dr && sc == dc){
        cout<<ans<<endl;
        return;
    }

    for(int i = 1; i<=dr-sr; i++){
        print_maze_path_with_jump(sr+i, sc, dr, dc, ans + "h"+ to_string(i));

    }
    for(int i = 1; i<=dc-sc; i++){
        print_maze_path_with_jump(sr, sc+i, dr, dc, ans + "v"+ to_string(i));
    }
    for(int i = 1; i<=dr-sr && i<=sc-dc; i++){
        print_maze_path_with_jump(sr+ i, sc+i, dr, dc, ans+"d"+to_string(i));
    }
}

int main(){
    int x, y;
    cin>>x>>y;
    print_maze_path_with_jump(0, 0, x, y, "");

}