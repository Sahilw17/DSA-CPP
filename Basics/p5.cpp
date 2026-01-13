#include<iostream>
using namespace std;

int main(){
    int age;
    string name;

    cout<<"Enetr the age\n";
    cout<<"Enter the name\n";

    cin>>age;
    cin.ignore();
    getline(cin,name);
    cout<<age<<" : "<<name;
}