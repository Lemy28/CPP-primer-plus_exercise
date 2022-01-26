//
// Created by DiDi on 2022/1/21.
//编写一个程序，他要求用户首先输入其名，然后输出其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用string对象和头文件中的函数。
#include <iostream>
#include <string>

using namespace std;

int main(){
    string firstname;
    string lastname;
    cout<<"Enter your first name:";
    getline(cin,firstname);
    cout<<"Enter your last name:";
    getline(cin,lastname);
    cout<<"Here's the information in a single string:";
    cout<<" "+lastname+", "+firstname;
    return 0;

}
