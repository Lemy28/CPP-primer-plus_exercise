//
// created by didi on 2022/1/26.
//
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char charr[20] {};
    int count=0;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    cin>>charr;
    while(strcmp(charr,"done")!=0){
        cin>>charr;
        count++;

    }
    cout<<"You entered a total of "<<count<<" word.";
    return 0;
}
