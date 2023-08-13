#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool is_all_safe(vector<vector<int>> chess, int row, int col){
    for(int i = row-1, j=col; i>=0; i--){
        if(chess[i][j] == 1){
            return false;
        }
    }
    for(int i = row-1, j = col-1; i>=0 && j>=0; i--, j--){
        if(chess[i][j] == 1){
            return false;
        }
    }
    for(int i = row-1, j=col+1; i>=0 && j >= 0; i--, j++){
        if(chess[i][j] == 1){
            return false;
        }
    }
    return true;
}

void n_queen(vector<vector<int>> chess, string asf, int row){
    if(row == chess.size()){
        cout<<asf<<endl;
        return;
    }
    for(int col = 0; col <chess.size(); col++){
        if(is_all_safe(chess, row, col)){
            chess[row][col] = 1;
            n_queen(chess, asf+to_string(row)+"-"+to_string(col) + " ", row+1);
            chess[row][col] = 0;
        }
    }
}


using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> chess(n, vector<int> (n, 0));
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cin>>chess[i][j];
    //     }
    // }
    n_queen(chess, "", 0);
}