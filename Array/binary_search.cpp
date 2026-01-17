#include<bits/stdc++.h>
using namespace std;
int main(){
    int n[5]={1,2,3,4,5};
    int target=5;
    int low=0;
    int high=(sizeof(n)/sizeof(n[0]))-1;
    while(low <= high){
        int mid=(low + high)/2;

        if(n[mid]==target){
            cout << mid;
            break;
        }
        else if(n[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
}