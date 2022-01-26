//
// Created by DiDi on 2022/1/21.
//编写一个C++程序，如下述输出实力所示的那样请求并显示信息。
#include <iostream>
using namespace std;
int main(){
    struct Student {
        char firstname[31];
        char lastname[31];
        char grade;
        int age;
    };
    Student stu1;
    cout<<"What is your first name?";
    cin.getline(stu1.firstname,30);
    cout<<"What is your last name?";
    cin.getline(stu1.lastname,30);
    cout<<"What letter grade do you deserve?";
    cin>>stu1.grade;
    cout<<"What is your age?";
    cin>>stu1.age;
    cout<<"Name:"<<stu1.lastname<<","<<stu1.firstname<<endl;
    cout<<"Grade:"<<(char)(stu1.grade+1)<<endl;
    cout<<"Age:"<<stu1.age;
    return 0;
}

