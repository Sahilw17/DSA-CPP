#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={9,8,74,234,54,12,54,1,56,8};
   int n = a.size();
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }    
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
}