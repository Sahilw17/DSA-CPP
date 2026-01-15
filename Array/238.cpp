/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
left=[1,1,2,6]
right=[24,12,4,1]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include<bits/stdc++.h>
using namespace std;

int  main(){
    vector<int> n={1,2,3,4};
    vector<int> ans(n.size());
    
    int mul=1;
    for(int i=0;i<n.size();i++){
        ans[i]=mul;
        mul*=n[i];
    }

    int suf=1;
    for(int i=n.size()-1;i>=0;i--){
        ans[i]*=suf;
        suf*=n[i];
    }
   
    for(int i=0;i<n.size();i++){
        cout << ans[i] <<" ";
    }
}







/*
     int fact=1;
    for(int i=0;i<n.size();i++){
        fact*=n[i];
    }

    for(int i=0;i<n.size();i++){
        int x=(fact/n[i]);
       ans.push_back(x);
    }
    for(int i=0;i<n.size();i++){
         cout<<ans[i]<<" ";
    }

*/