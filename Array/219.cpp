/*
Given an integer array nums and an integer k,
return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
 
Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:
Input: nums = [1,0,1,1], k = 1
Output: true

Example 3:
Input: nums = [1,2,3,1,2,3], k = 2
Output: false
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v={1,2,3,1,2,3};
    int k=2;

    unordered_map<int,int> mp(v.size());
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i]) != mp.end()){
            if(abs(i-mp[v[i]]) <= k){
                cout << "true";
                return 0;
            }
        }
        mp[v[i]]=i;
    }
    cout <<"False";
}



/*
    int diff=INT_MAX;
    int k=3;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i] == v[j]){
                if(abs(i-j) <= k){
                    cout << "true";
                    break;
                }
            }
        }
    }
    cout<< "false";
*/