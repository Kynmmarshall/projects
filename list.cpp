#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
   cout<<""<<endl;
   double num1,num2,result;
   char operation;
   string reset="yes";
   while(reset=="yes"){
   cout<<"enter your first number: ";
   cin>>num1;
   cout<<"choose an operation (+,-,/,*):"<<endl;
   cin>>operation;
   cout<<"enter your first number: ";
   cin>>num2;

   switch(operation){
      case '+':
       result=num1+num2;
      break;

      case '-':
       result=num1-num2;
      break;

      case '/':
       result=num1/num2;
      break;

      case '*':
       result=num1*num2;
      break;
   }
   cout<<"The answer is: "<<result<<endl;  
   cout<<"Do you want to continue calculating (yes or no)?"<<endl;
   cin>>reset;
   }
   return 0;
}  