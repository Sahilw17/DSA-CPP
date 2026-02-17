/*
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

Example 1:
Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

Example 2:
Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.

Example 3:
Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int>v={2,1};
    int n=v.size();
    int miss=0;
    int j=1;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(v[i] >0 && v[i]<n+1){
        mp[v[i]]=j;
      }
      j++;
    }

    for(int i=1;i<n+1;i++){
        if(mp.find(i)==mp.end()){
            miss=i;
            break;
        }
        else{
            miss=n+1;
        }
    }


        
    cout <<miss;

}

/*
1-1
2-2
0-3


if(v[i] >0 && v[i]<n+1){
        mp[v[i]]=j;
      }
      else{
        miss=j;
        break;
      }
      j++;
*/


