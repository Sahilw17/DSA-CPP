/*
Given an array of integers arr and two integers k and threshold,
return the number of sub-arrays of size k and average greater than or equal to threshold.

 

Example 1:
Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
Output: 3
Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively.
All other sub-arrays of size 3 have averages less than 4 (the threshold).

Example 2:
Input: arr = [11,13,17,23,29,31,7,5,2,3], k = 3, threshold = 5
Output: 6
Explanation: The first 6 sub-arrays of size 3 have averages greater than 5. Note that averages are not integers.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={11,13,17,23,29,31,7,5,2,3};
    int k=3;
    int thr=5;
    int sum=0;
    int cnt=0;
    int avg=0;

    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(i >k-1){
            sum-=v[k-i];
        }
        if(i>=k-1){
            avg=sum/k;
            if(avg >= thr){
                cnt++;
            }
        }
    }
    cout << cnt;
}