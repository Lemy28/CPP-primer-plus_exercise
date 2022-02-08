//
// Created by DiDi on 2022/2/9.
//
#include <cctype>
#include <iostream>
#include <array>

using namespace std;
int main(){
    double average;
    double sum = 0;
    int count = 0;
    auto *donations = new array<double,10 >;
    for(int i=0;i<10;i++){
        cin>>donations->at(i);
    }
    for(count=0;count<10;count++){
        cout<<donations->at(count)<<endl;
    }



    return 0;
}

