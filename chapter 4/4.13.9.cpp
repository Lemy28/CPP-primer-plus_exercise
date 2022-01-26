//
// Created by DiDi on 2022/1/22.
//完成编程练习6，但使用new来动态分配数组，而不是声明一个包含3个元素的CandyBar数组。
#include <iostream>
#include <string>

using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calorie;
};
int main(){
   CandyBar *candyBar = new CandyBar[3]{
           {
                   "Mocha Munch",
                   2.3,
                   350
           },
           {
                   "Hershey's Bar",
                   43,
                   220
           },
           {
                   "Milky Way",
                   28,
                   240
           }
   };
    for(int i=0;i<3;i++){
        cout<<"Name:"<<candyBar[i].name<<endl;
        cout<<"Weight:"<<candyBar[i].weight<<endl;
        cout<<"Calorie:"<<candyBar[i].calorie<<endl;
    }
    return 0;
}

