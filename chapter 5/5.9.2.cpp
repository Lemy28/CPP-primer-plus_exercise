//
// Created by DiDi on 2022/1/24.
//
#include <iostream>
#include <array>

using namespace std;

int main(){
    array<long double,101> arr {1};
    for (int i = 1;i<arr.size();i++)
        arr[i]=i*arr[i-1];
    for (int i=0;i<arr.size();i++)
        cout<<i<<"! = "<<arr[i]<<endl;
    return 0;

}

