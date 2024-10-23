#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  srand(time(0));
 int num=(rand()%100),guess,number_of_trials=0,stop=0;
 cout<<endl<<endl<<endl<<"******************* KYNM Number guessing Game *************"<<endl<<endl<<endl;
 cout<<"Guess a number between 1 and 100 (inclusively): "<<endl;
cin>>guess;
 do{
  
  if(guess==num){
    cout<<"************* Congratulation you guessed right ***********"<<endl;
    cout<<"you made "<<number_of_trials<<" trials"<<endl;
    stop++;
  }
  else if (guess<num)
  {
    cout<<"The number you guessed is lower than the answer.Try again: "<<endl<<endl;
    cin>>guess;
    number_of_trials++;
  }
  else if (guess>num)
  {
    cout<<"The number you guessed is higher than the answer.Try again: "<<endl<<endl;
    cin>>guess;
    number_of_trials++;
  }
 }while(stop==0);
 
   return 0;
}