#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void flood_fill(vector<vector<int>> v, vector<vector<int>> visited, int row, int col, string path_so_far){
    if(row<0 || col < 0 || row == v.size() || col == v[0].size() || visited[row][col] == 1 || v[row][col] == 1){
        return;
    } 
    if(row == v.size()-1 && col == v[0].size()-1){
        cout<< path_so_far<<endl;
        return;
    }
    visited[row] [col] = 1;
    flood_fill(v, visited, row + 1, col, path_so_far + "d");
    flood_fill(v, visited, row - 1, col, path_so_far + "t");
    flood_fill(v, visited, row, col + 1, path_so_far + "r");
    flood_fill(v, visited, row, col - 1, path_so_far + "l");
    visited[row][col] =  0;
}


int main(){
    int x=2;
    int y=2;
    cin>>x>>y;
    vector<vector<int>> v(x, vector<int> (y, 0));
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> visited(x, vector<int> (y, 0));
    flood_fill(v, visited, 0, 0, "");
}