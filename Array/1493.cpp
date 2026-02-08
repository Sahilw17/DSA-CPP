/*
Given a binary array nums, you should delete one element from it.
Return the size of the longest non-empty subarray containing only 1's in the resulting array.
Return 0 if there is no such subarray.
 
Example 1:
Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

Example 2:
Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].

Example 3:
Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={0,1,1,1,0,1,1,0,1};
    int left=0;
    int cnt=0;
    int maxL=INT_MIN;

    for(int right=0;right<v.size();right++){
        if(v[right]==0){
            cnt++;
        }

        while(cnt>1){
            if(v[left]==0){
                cnt--;
            }
            left++;
        }

        maxL=max(maxL,right-left);
    }
    cout << maxL;
}