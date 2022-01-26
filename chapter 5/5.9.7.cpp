//
// Created by DiDi on 2022/1/26.
//
#include <iostream>
#include <string>

using namespace std;

int main(){
    struct car{
        string make;
        int year;
    };
    int cars;
    cout<<"How many cars do you wish to catalog?";
    cin>>cars;
    car *carptr = new car[cars];
    for(int i =0;i<cars;i++){
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make:";
        cin.get();//又忘了加这个
        getline(cin,carptr[i].make);
        cout<<"Please enter the year made:";
        cin>>carptr[i].year;
    }
    cout<<"Here is your collection:"<<endl;
    for(int i=0;i<cars;i++){
        cout<<carptr[i].year<<" "<<carptr[i].make<<endl;
    }
    delete [] carptr;
    return 0;
}

