/*
303. Range Sum Query - Immutable
Given an integer array nums, handle multiple queries of the following type:
Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:
NumArray(int[] nums) Initializes the object with the integer array nums.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
 
Example 1:
Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
Output
[null, 1, -1, -3]
Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={-2, 0, 3, -5, 2, -1};
    vector<int>total(v.size());
    int pre=0;
    for(int i=0;i<v.size();i++){
        pre+=v[i];
        total[i]=pre;
    }

    int l=1;
    int r=5;

    if(l==0){
        cout <<total[r] <<" ";
    }
    else{
        cout << total[r]-total[l-1] <<" ";
    }

    
    //cout <<ans;
}