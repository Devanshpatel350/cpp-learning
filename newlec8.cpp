#include<iostream>

using namespace std;

int main(){
    //operator precdence
    int a =4, b = 5;
    //int c = (a*5)+4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}