/*
You have a long flowerbed in which some of the plots are planted, and some are not.
However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty,
and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule
and false otherwise.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Example 2:
Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={0};
    int n=1;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){

            bool left=(i==0) || (v[i-1]==0);
            bool right=(i==v.size()-1) ||(v[i+1]==0); 

            if(left && right){
                v[i]=1;
                cnt++;

                i++;
            }
        }
    }

    if(cnt>=n){
        cout << true;
    }
    else{
        cout << false;
    }
}