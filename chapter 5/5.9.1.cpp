//
// Created by DiDi on 2022/1/24.
//
#include <iostream>

using namespace std;
int main(){
    int min,max,sum;
    sum = 0;
    cout<<"Input the min and the max:";
    cin>>min;
    cin>>max;
    cout<<min<<"  "<<max;
    for(;min<=max;min++)
        sum += min;
    cout<<"\nThe sum is "<<sum;
}