/*
66. Plus One
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.

 

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

Example 2:
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].

Example 3:
Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={9};
    //int n=v.size()-1;
    int cnt=1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]<9 && i==v.size()-1){
            v[i]+=1;
            break;
        }
        else if(v[i]>=9){
            v[i]=0;
            v[i-1]+=1;
            cnt+=1;
        }
        else if(cnt>0 && v[i]<=9 ){
            cnt=0;
            break;
        }
    }
    cout << cnt << endl;
     if(v[0]>=9 && cnt>0 ){
            v[0]=0;
            v.insert(v.begin(),1);
        }


    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}