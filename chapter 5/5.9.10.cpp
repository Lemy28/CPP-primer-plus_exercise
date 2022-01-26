//
// Created by DiDi on 2022/1/26.
//
#include <iostream>

using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"\n";
    for(int i=0;i<rows;i++){
        for(int j=1;j<rows-i;j++){
            cout<<".";
        }
        for(int k=i+1;k>0;k--)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
