//
// Created by DiDi on 2022/1/26.
//
#include <iostream>
#include <cctype>


using namespace std;

int main(){
    char ch;
    while(cin.get(ch)&&ch!='@'){
        if(!isdigit(ch)){
            if(islower(ch)){
                cout<<(char) toupper(ch);
            }
            else if(isupper(ch)){
                cout<<(char) tolower(ch);
            }
            else cout<<ch;
        }
    }

    return 0;
}
