/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,1};
    int n=v.size();
    vector<int>vv;
    unordered_map<int,int>mp(v.size());

    for(int i=0;i<=n;i++){
        mp[v[i]]=1;
    }

    
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            vv.push_back(i);
        }
    }

    for(int i=0;i<vv.size();i++){
        cout << vv[i] <<" ";
    }
}