//
// Created by DiDi on 2022/2/9.
//
#include <cctype>
#include <iostream>
#include <array>

using namespace std;
int main(){
    double donations[10] {};
    int index;
    int count=0;
    double average = 0;
    for(index=0;index<10;index++){
        cin>>donations[index];
        if(cin.fail())//输入错误则退出
            break;
        average+=donations[index];
    }
    average/=index;
    for(int i=0;i<10;i++){
        if(donations[i]>average)
            count++;
    }

    cout<<"The average is "<<average<<endl;
    cout<<"There are "<<count<<" donations larger than the average";
    return 0;
}

