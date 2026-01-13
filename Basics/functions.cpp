/*
Write functions for:
    isEven(int n) → returns true/false
    maxOfThree(int a, int b, int c)
    swapTwoNumbers(int &a, int &b) (using reference)
*/
#include<iostream>
using namespace std;

bool iseven(int n){
    if(n%2==0){
        return true;
    }
    else
        return false;
}

int maxofThree(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }

    else if(b>a && b>c){
        return b;
    }

    else
        return c;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){

    cout << iseven(41)<<"\n";
    cout<< maxofThree(12,14,1)<<"\n";
    
    int a=10;
    int b=22;
    swap(a,b);

    cout <<"a: "<<a<<"\t b: "<<b;
}