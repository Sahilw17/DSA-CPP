/*
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.
Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]

Example 2:
Input: nums = [1,1]
Output: [1,2]

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={2,2};
    vector<int>vv;
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]+=1;
    }

    int dup=-1;
    int miss=-1;
    for(int i=1;i<=v.size();i++){
        if(mp[i]==2){
           dup=i;
        }
        if(mp[i]==0){
           miss=i;
        }
    }

    cout << dup<<" "<<miss;
    

}