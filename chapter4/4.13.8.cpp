//
// Created by DiDi on 2022/1/22.
//完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼的直径。
#include <string>
#include <iostream>

using namespace std;

struct Pizza{
    string name;
    double diameter;
    double weight;
};

int main(){
    Pizza *pizza = new Pizza;
    cout<<"Enter the diameter of pizza:";
    cin>>pizza->diameter;
    cin.get();//必不可少
    cout<<"Enter the company:";
    getline(cin,pizza->name);
   cout<<"Enter the weight of pizza:";
    cin>>pizza->weight;
    cout<<"\n Company Name:"<<pizza->name;
    cout<<"\n Pizza Diameter:"<<pizza->diameter;
    cout<<"\n Pizza Weight:"<<pizza->weight;

    return 0;
}

