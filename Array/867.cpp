/*
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

Example 2:
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> vv={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> mat(vv.size(),vector<int>(vv[0].size()));
    for(int i=0;i<vv.size();i++){
        for(int j=0; j<vv[i].size();j++){
            mat[j][i]=vv[i][j];
        }
    }
     for(int i=0;i<vv.size();i++){
        for(int j=0; j<vv[i].size();j++){
           cout << vv[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;
    
    for(int i=0;i<mat.size();i++){
        for(int j=0; j<mat[i].size();j++){
           cout << mat[i][j]<<" ";
        }
        cout <<endl;
    }

}