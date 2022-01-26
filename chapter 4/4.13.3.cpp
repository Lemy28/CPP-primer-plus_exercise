//
// Created by DiDi on 2022/1/21.
//
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char firstname[31];
    char lastname[31];
    cout<<"Enter your first name:";
    cin.getline(firstname,30);
    cout<<"Enter your last name:";
    cin.getline(lastname,30);
    cout<<"Here's the information in a single string:";
    cout<<" "<<lastname<<", "<<firstname;
    return 0;

}
