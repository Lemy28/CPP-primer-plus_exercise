//
// Created by DiDi on 2022/1/21.
//William Wingate 从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
//- 披萨饼公司的名称，可以有多个单词组成。
//- 披萨饼的直径。
//- 披萨饼的重量。
//请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用cin（或它的方法）和cout。
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

struct Pizza{
    string name;
    double diameter;
    double weight;
};

int main(){
    Pizza pizza;
    cout<<"Enter the company:";
    getline(cin,pizza.name);
    cout<<"Enter the diameter of pizza:";
    cin>>pizza.diameter;
    cout<<"Enter the weight of pizza:";
    cin>>pizza.weight;
    cout<<"\n Company Name:"<<pizza.name;
    cout<<"\n Pizza Diameter:"<<pizza.diameter;
    cout<<"\n Pizza Weight:"<<pizza.weight;

    return 0;
}
