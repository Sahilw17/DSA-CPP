/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={4,1,2,1,2};
    int xr=0;
    for(int i=0;i<v.size();i++){
        xr=xr^v[i];
    }

    cout << xr;
}


/*

 unordered_map<int,int>mp(v.size());

    for(int i=0;i<v.size();i++){
        mp[v[i]]+=1;
    }

    for(auto it: mp){
        if(it.second == 1){
            cout << it.first;
        }
    }

*/
