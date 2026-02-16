/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and using only constant extra space.

 
Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

Example 2:
Input: nums = [3,1,3,4,2]
Output: 3

Example 3:
Input: nums = [3,3,3,3,3]
Output: 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={3,1,3,4,2};
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }

    for(int i=0;i<mp.size();i++){
        if(mp[v[i]]==2){
            cout << v[i];
            break;
        }
    }
}