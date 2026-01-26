/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that
i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
 
Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

Example 2:
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

Example 3:
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={-1,0,1,2,-1,-4};
    vector<vector<int>> vv;
    int n=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l < r){
           int sum=v[i]+v[r]+v[l];

           if(sum <0){
            l++;
           }
           else if(sum >0){
            r--;
           }
           else{
            vv.push_back({v[i],v[l],v[r]});
            l++;
            r--;

            while(l<r && v[l]==v[l-1])l++;
            while(l<r && v[r]==v[r+1])r--;
           }
        }
    }

    for(int i=0;i<vv.size();i++){
        for(int j=0;j<(vv[0].size());j++){
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }

}