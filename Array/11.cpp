/*
You are given an integer array height of length n.
There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:
Input: height = [1,1]
Output: 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1, 3, 2, 5, 25, 24, 5};
    int height=0;
    int width=0;
    int n=v.size();
    int l=0;
    int r=n-1;
    int ans=0;
    int result=0;

    for(int i=0;i<n;i++){
           width=r-l;
            height=min(v[l],v[r]);
            ans=width*height;

            if(ans > result){
                result=ans;
            }

            if(v[l]>v[r]){
                r--;
            }
            else{
                l++;
            }
        }
    cout << result;

}