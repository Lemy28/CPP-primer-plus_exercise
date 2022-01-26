//
// Created by DiDi on 2022/1/24.
//
#include <iostream>
#include <string>

using namespace std;

int main(){
    char* Month[12]{"January","February","March","April","May","June","July","August",\
    "September","October","November","December"};
    int booksale[3][12]{};
    int n;
    int sum = 0;
    for(int i=0;i<36;i++){
        cout<<"Year "<<i/12+1<<" "<<Month[i%12]<<" sales:";
        cin>>n;
        booksale[i/12][i%12]=n;
        sum+=n;
    }
    cout<<"The total sales is "<<sum<<endl;
    return 0;

}