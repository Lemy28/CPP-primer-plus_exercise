//
// Created by DiDi on 2022/1/22.
//编写一个程序，让用户输入三次40码跑的成绩（如果您愿意，也可让用户输入40米跑的成绩），并显示次数和平均成绩。请使用一个array对象来存储数据（如果编译器不支持array类，请使用数组）。
#include <iostream>
#include <array>

using namespace std;

int main(){
   array<double,3> scores;

   cout<<"Enter the first score:" ;
   cin>>scores[0];
   cout<<"Enter the second score:" ;
   cin>>scores[1];
   cout<<"Enter the third score:" ;
   cin>>scores[2];

   cout<<"Average score:"<<(scores[0]+scores[1]+scores[2])/3<<endl;
   cout<<"Total scores:"<<scores[0]+scores[1]+scores[2]<<endl;
   return 0;
}
