/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    int max1=0;
    int ans=INT_MIN;
    if(v.size()==1){
        cout << v[0];
    }
    else{
    
        for(int i=0;i<v.size();i++){
        // max1 = max(v[i], max1 + v[i]);
           if(max1+v[i] > v[i]){
                max1 = max1+v[i];
           }
           else{
            max1=v[i];
           }
            if(max1 > ans ){
                ans=max1;
            }
        }cout << ans;
    }

}