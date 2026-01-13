/*Write a program that:
Takes name and age
Prints:
Hello <name>, you are <age> years old
*/

#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"Enter the name: ";
    cin>> name;

    cout<<"Enter the age: ";
    cin>> age;

    cout<<"Apka Naam: "<<name<<"\nApki Umra: "<<age;
}