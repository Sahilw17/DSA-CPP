#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={9,8,74,234,54,12,54,1,56,8};
    int n = a.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        swap(a[i], a[minIndex]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
}