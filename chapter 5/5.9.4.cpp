//
// Created by DiDi on 2022/1/24.
//
#include <array>
#include <iostream>

using namespace std;

int main(){
    array<double,100> Daphne{100};
    array<double,100> Cleo{100};
    int i;
    for(i=1;Cleo[i-1]<=Daphne[i-1];i++) {
        Daphne[i] = Daphne[i - 1] + 10;
        Cleo[i] = Cleo[i - 1] * 1.05;
       }
    cout << "Daphne:" << Daphne[i-1] << endl;
    cout << "Cleo:" << Cleo[i-1] << endl;
    cout <<i-1<< " years after";
    return 0;
}

