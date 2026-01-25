/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={0,1,0,3,12};
    int n=v.size();
    int k=0;
    int temp=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
        temp=v[k];
        v[k]=v[i];
        v[i]=temp;
        k++;
        }
    }


    for(int i=0;i<n;i++){
        cout << v[i] <<" ";
    }
}