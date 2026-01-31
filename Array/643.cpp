/*
You are given an integer array nums consisting of n elements, and an integer k.
Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value.
Any answer with a calculation error less than 10-5 will be accepted. 

Example 1:
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

Example 2:
Input: nums = [5], k = 1
Output: 5.00000
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={9,7,3,5,6,2,0,8,1,9};
    int k=6;
    float sum=0;
    int j=0;
    float maxavg=INT_MIN;
    float avg=0;
    if(k==v.size()){
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }cout << sum/k;
    }

    else{
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(i>k-1){
                sum-=v[i-k];
            }
            avg=sum/k;
                if(avg > maxavg){
                    maxavg=avg;
                }
        }
        cout << maxavg;

    }
}