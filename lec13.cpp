#include <iostream>

using namespace std;


int main() {
    // Array example
    int mark[4] ={23,24,25,26};
    int mathMarks[4];
    mathMarks[0] = 232;
    mathMarks[1] = 287;
    mathMarks[2] = 297;
    mathMarks[3] = 223;
    
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;
  

    cout<<"these are math marks"<<endl;
    
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    
       // you can change the value of an array
    mark[2] = 299;
    cout<<"These are marks"<<endl;
    
    // cout<<mark[0]<<endl;
    // cout<<mark[1]<<endl;
    // cout<<mark[2]<<endl;
    // cout<<mark[3]<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"the valu of mark "<<i<<" is "<<mark[i]<<endl;
    }
    
    
    // pointers and arrays
    int* p = mark;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"the value of *p is "<<*p<<endl;
    // cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}