//C++ TUTORIAL: IF-ELSE & CONTROL STRUCTURES
/*
1)sequence structure
2)selection structure
3)loop structure

c++ CONTROL STRUCTURES

(1)if-else statment
int i = 0;
if(i<3){
cout<<i;
i++;
}


(2) if-else lodder.
(3)switch case
seitch(expression){
case 1:
{
action1;
}
default:
{
action4;
}
*/
#include<iostream>
using namespace std;

int  main(){

   // cout<<"hello world";
   int age;
   cout<<"tell me your age "<<endl;
   cin>>age;
//selection control structure: If else-if else ladder
//    if((age<18) && (age>0)){
//     cout<<"you can not came to my party "<<endl;

//    }
//    else if(age<1){
//     cout<<"you are not bron yet "<<endl;
//    }
//    else if(age==18){
//           cout<<"you are a kid and you will get a kid pass to the party"<<endl;
//    }
//    else{
//     cout<<"you can come to the party"<<endl;
//    }


// selection control structure: Switch case statements
   switch (age)
   {
   case 18: //constant expression:
    /* code */
    cout<<"you are 18";
    break;
   
   default:
    break;
   } 
   cout<<"done with switch";
return 0;
}