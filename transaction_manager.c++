#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){ 
   string decision="",cont="yes"; 
   int Balance=0,deposit=0,withdraw=0;
   cout<<"Good morning dear customer welcome to KYNM BANK SYSTEM"<<endl;
   while(cont=="yes"){
   cout<<"Do you wish to 'deposit','withdraw' or 'consult'? "<<endl;
   cin>>decision;
     if(decision=="deposit"){
        cout<<"What amount in FCFA do you want to deposit in your account (type only the number)? "<<endl;
        cin>>deposit;
        Balance=Balance+deposit;
        cout<<deposit<<" FCFA was succesfully added to your  account. Your new balance is "<<Balance<<" FCFA"<<endl;
     }
     else if (decision=="withdraw"){
      cout<<"What amount in FCFA do you want to withdraw from your account (type only the number)? "<<endl;
        cin>>withdraw;
        if (withdraw>Balance){
         cout<<"Sorry you don't have enough money in your account"<<endl;
        }
        else{
        Balance=Balance-withdraw;
        cout<<withdraw<<" FCFA was succesfully retrieved  account. Your new balance is "<<Balance<<" FCFA"<<endl;}
      }
     else if(decision=="consult"){
        cout<<"Your account balance is "<<Balance<<" FCFA"<<endl;
     }
     else{
      cout<<"You entered a wrong input"<<endl;
     }
     cout<<endl<<endl<<"Do you want to carry out another transaction (yes or no)? "<<endl;
     cin>>cont;
   }
   cout<<"************ Thanks for visiting ************";
   return 0;
}