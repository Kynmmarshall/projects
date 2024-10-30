#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"\n\n*** WRITE THE LETTER THAT CORRESPONDS TO THE CORRECT ANSWER (UPPER CASE LETTER) ***\n\n";
  string questions[]={"1.Which year was c++ created?",
                       "2.Who created c++?",
                       "3.What was the first programming language created?",
                       "4.How many Bytes can a string datatype store?"};
  string options[][4]={{"A.1976","B.1987","C.1985","D.1973"},
                      {"A.Bjarne Stroustrup","B.Guido Van rossum","C.Bill Gates","D.Arthur Morgan"},
                      {"A.c++","B.cobbol","C.c","D.Plankalkül"},
                      {"A.8","B.32","C.4","D.16"}};
  string answers[]={"C","A","D","B"};
  int size=sizeof questions/sizeof questions[0],correct=0;
  string guess[size];
    for(int i=0;i<size;i++){
    cout<<"******************************\n"<<questions[i]<<"\n******************************\n";
    for(int j=0;j<4;j++){
      cout<<options[i][j]<<"\n";
    }
    cout<<"\n";
    cin>>guess[i];
    //guess[i]=toupper(guess[i]);
    if(guess[i]==answers[i]){
      cout<<"*** CORRECT ***\n\n\n";
      correct+=1;
    }
    else{cout<<"*** WRONG ****\n";
    cout<<"Correct Answer: "<<answers[i]<<"\n\n";
    }
  }
  cout<<"******************************\n*          RESULT            *\n******************************\n"<<"your final score is "<<correct<<"/4";

  return 0;
}