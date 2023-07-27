#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<string> get_maze_path(int sr, int sc, int dr, int dc){
    if(sr == dr && sc == dc){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    // else if(sr < 0 || sr > dr || sc > dc || sc < 0){
    //     vector<string> bres;
    //     return bres;
    // }
    vector<string> paths_v;
    vector<string> paths_h;
    if(sr < dr){
        paths_v = get_maze_path(sr+1, sc, dr, dc);
    }
    if(sc<dc){
        paths_h = get_maze_path(sr, sc+1, dr, dc);

    }
    vector<string> paths;
    for(int i = 0; i<paths_h.size(); i++){
        paths.push_back("h"+paths_h[i]);
    }
    for(int i = 0; i<paths_v.size(); i++){
        paths.push_back("v"+paths_v[i]);
    }
    return paths;
}


int main(){
    int x, y;
    cin>>x>>y;
    vector<string> paths = get_maze_path(0, 0, x, y);
    for(int i = 0; i < paths.size();i++){
        cout<<paths[i]<<endl;
    }
}