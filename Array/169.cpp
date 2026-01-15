/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,2,1,1,1,2,2};
    unordered_map<int,int> mp(v.size());

    for(int i=0;i<v.size();i++){
        mp[v[i]]+=1;
    }
    int max=INT_MIN;
    for(auto it: mp){
        if(max<it.second){
            max=it.second;
        }
    }
    if(max> v.size()/2){
     for(auto it: mp){
        if(max==it.second){
            cout <<it.first;
        }
     }   
    }
    else{
        cout << "";
    }
}
