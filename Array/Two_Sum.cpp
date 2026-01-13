//nums = [2 , 7 , 11 , 15 ], target = 9
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> mp;
    int target;
    vector<int> v;
    cin >> target;
    for(int i=0;i<4;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i=0;i<4;i++){
        mp[v[i]]=i;
    }
    for(int i=0;i<4;i++){
        int rem=target-v[i];
        if(mp.find(rem) != mp.end()){
            int k1=i;
            int k2=mp[rem];
            cout << k1 << " "<< k2 << endl;
            break;
        }
    }
}



/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem) != mp.end()){
                int k1=i;
                int k2=mp[rem];
                if(k1 != k2){
                    ans.push_back(k1);
                    ans.push_back(k2);
                    return ans;
                }
            }
        }return ans;
    }
};
*/