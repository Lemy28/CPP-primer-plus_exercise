//
// Created by DiDi on 2022/1/24.
//
#include <iostream>
#include <string>

using namespace std;

int main(){
    char* Month[12]{"January","February","March","April","May","June","July","August",\
    "September","October","November","December"};
    int booksale[12]{};
    int n;
    int sum = 0;
    for(int i=0;i<12;i++){
        cout<<Month[i]<<" sales:";
        cin>>n;
        booksale[i]=n;
        sum+=n;
    }
    cout<<"The total sales is "<<sum<<endl;
    return 0;

}