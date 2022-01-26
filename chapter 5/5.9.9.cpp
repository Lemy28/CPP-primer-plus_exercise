//
// Created by DiDi on 2022/1/26.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    string charr;
    int count=0;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    cin>>charr;
    while(charr!="done"){
        cin>>charr;
        count++;

    }
    cout<<"You entered a total of "<<count<<" word.";
    return 0;
}

