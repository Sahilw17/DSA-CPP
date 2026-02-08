/*
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

Example 1:
Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.

Example 2:
Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.

Example 3:
Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
1004
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s={"leetcode"};
    int k=3;
    int n=s.size();
    int maxC=INT_MIN;
    int cnt=0;
    for(int i=0;i<n;i++){
      if(s[i]=='a' ||s[i]=='u' ||s[i]=='o' ||s[i]=='i' ||s[i]=='e' ){
        cnt++;
      }

      if(i >k-1){
        if(s[i-k]=='a' ||s[i-k]=='e' ||s[i-k]=='i' ||s[i-k]=='o' ||s[i-k]=='u'){
            cnt --;
        }
      }

      if(i >=k-1){
        maxC=max(maxC,cnt);
      }
    }
    cout << maxC;
}