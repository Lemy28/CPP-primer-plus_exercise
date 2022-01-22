//
// Created by DiDi on 2022/1/21.
// 结构CandyBar包含3个成员，如编程练习5所示。请编写一个程序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择的值，然后显示每个结构的内容。
#include <iostream>
#include <string>

using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calorie;
};

int main(){
    CandyBar candyList[3] {
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
        cout<<"Name:"<<candyList[i].name<<endl;
        cout<<"Weight:"<<candyList[i].weight<<endl;
        cout<<"Calorie:"<<candyList[i].calorie<<endl;

    }
    return 0;

}

