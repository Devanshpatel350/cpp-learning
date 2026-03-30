#include<iostream>

using namespace std;

typedef struct employee

{
    /* data */
    int eId;
    char farChar;
    float salary;
}ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = lunch;
    cout<<(m1==1)<<endl;//treu
    cout<<(m1==2)<<endl;//false
    // struct employee devansh;
    // ep devansh;
    // union money m1;
    // m1.rice = 30;
    // //m1.car = 'c'; garewage value
    // cout<<m1.rice;
    // struct employee aman;
    // struct employee abhi;
    // devansh.eId = 1;
    // devansh.farChar = 'c';
    // devansh.salary = 1200;
    // cout<<"The value is "<<devansh.eId<<endl;
    // cout<<"The value is "<<devansh.farChar<<endl;
    // cout<<"The value is "<<devansh.salary<<endl;
    
    return 0;
}
