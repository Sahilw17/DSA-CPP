/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m[5]={1,2,6,23,65};
    int t=5;

    int low=0;
    int high=(sizeof(m)/sizeof(m[0]))-1;
    int mid;
    while(low <= high){
        mid=(low+high)/2;

        if(m[mid]==t){
            cout << mid;
            break;
        }

        else if(m[mid] > t){
            high=mid-1;
        }

        else{
            low=mid+1;
        }
    }
    cout << low;
}