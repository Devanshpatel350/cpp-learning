//variables in c++//
/*variable scope $ data types
a variable is a container to hold data
variable can be of various type
primarilybwe have these variable types in c++;
1) int -{1,2,3}
2)floot- (1.1,1.2,1.3)
3)char-(A,S,D,F,S,S,)
4)DOUBLE- (1.354,.......)
5)blooean-y or n;



int sum =34; means sum is an integer variable which holds value 34 in memorory 




syntax for declaring variables in c++



> Data type variable name value
ex int a=4,b=6
vased on scope, variable can be classified into two types;
local variables 
global variables 
variable scope:- 
scope of a vriable is the region in code wheere the existence fo variable is valid.
based on scope we have local and global variables in c++
basic input\ output in c++ 
c++ come with libraries which helps usin perforing input out put. In c++ sequence of bytes corresponding to input and output aer commonly known a streams 
Input stream :- direction of flow of bytes takes place from input device (for ex keyboard ) to the main memory. 
Output stream:- direction of flow of bytes takes place from main memory ot the outut devic (for example display).


#include<iostream>
using namespacestd;


int glo=6;
void sum(){
int a;
cout<<glo;
}





#include<iostream>
using namespaceastd;

int num1,num2;
cout<<"enter the value of num1:\n";////<<is called Insertion operator

cin> num1;  \\\\ is called extraction operator

cout<<"Enter tge value of num 2:\n";//// ia called insertion operator

cout<<"the sum is"<<num1+num2;

List of Reserved keywords in c++ 
This is a list of keywords reserved in c++ 
Since they are used by the language itself these keywords are not abailable for re-definition or overloading
In short, yor cannot create a variable with the names.
There are two type of header files:-
System header files:- It comed wth the compiler. 
User defined header files:- It is witten by the programmet presentin the current directory. 






*/

#include<iostream>

using namespace std;

int main(){
    cout<<"this is hello world program";

    int main();{
        int a=4,b=5;
        cout<<"operators in c++:"<<endl;
        cout<<"following are the type of operators in c++:"<<endl;// Arithmetic operators



        cout<<"the value of a+b is"<<a+b;
        cout<<"the value of a-b is"<<a-b;
        cout<<"the value of a*b is"<<a*b;
        cout<<"the value of a/b is"<<a/b;



        //Assignment operators --> used to assigh value to variables
        //int a=3,b=9;
        //char d="d";

        // comparison operators

        cout<<"following are the logical operators in c++"<<endl;
        cout<<"the value of this logical or operator((a==b)//(a<b))"<<endl;

        return 0;
    }
}