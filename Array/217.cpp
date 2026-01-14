/*
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true
Explanation:
The element 1 occurs at the indices 0 and 3.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> n={1,2,3,1};  
    unordered_set<int> mp;
    for(int i=0;i<n.size();i++){
        if(mp.find(n[i]) != mp.end()){
            return true;
        }
        mp.insert(n[i]);
    }  
    return false;
}




/*BRUTEFUL SLN
for (int i = 0; i < sizeof(n); i++)
    {
        for (int  j = i+1; j < sizeof(n); j++)
        {
            if(n[i]==n[j]){
                cout << true;
                break;
            }
        }
        
    }return false;
    */