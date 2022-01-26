//
// Created by DiDi on 2022/1/24.
//
#include <iostream>

using namespace std;

int main(){
    long sum{};
    int n;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0){
        sum+=n;
        cout<<"The sum is "<<sum<<endl;
        cin>>n;
    }

    return 0;
}

