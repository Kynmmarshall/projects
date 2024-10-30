#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
void draw_board(char *spaces){
 cout<<"\n";
 cout<<"______________________\n";
 cout<<"|      |      |      |\n";
 cout<<"|  "<<spaces[0]<<"   |  "<<spaces[1]<<"   |  "<<spaces[2]<<"   |\n";
 cout<<"|______|______|______|\n";
 cout<<"|      |      |      |\n";
 cout<<"|  "<<spaces[3]<<"   |  "<<spaces[4]<<"   |  "<<spaces[5]<<"   |\n";
 cout<<"|______|______|______|\n";
 cout<<"|      |      |      |\n";
 cout<<"|  "<<spaces[6]<<"   |  "<<spaces[7]<<"   |  "<<spaces[8]<<"   |\n";
 cout<<"|______|______|______|\n";
 cout<<"\n";
}
void player_move(char *spaces,char player){
  int number;
  do{
     cout<<"Enter a spot to place a marker (1-9): ";
     cin>>number;
     number--;
     if(spaces[number]==' '){
      spaces[number]=player;
      break;
     }
  }while(number>=0 || number<=8);
}
void computer_move(char *spaces,char computer){

  int number;
  srand(time(0));
  while (true){
  number=rand()%9;
  if(spaces[number]==' '){
      spaces[number]=computer;
      break;
     }
  }
}
bool check_winner(char *spaces,char player,char computer){

    if((spaces[0]!=' ')&&spaces[0]==spaces[1]&& spaces[1]==spaces[2]){
      spaces[0]==player? cout<<"\n***** YOU WON *****\n" : cout<<"\n***** YOU LOSED *****\n";
    }
    else if((spaces[3]!=' ')&&spaces[3]==spaces[4]&& spaces[4]==spaces[5]){
      spaces[3]==player? cout<<"\n***** YOU WON *****\n" : cout<<"\n***** YOU LOSED *****\n";
    }
    else if((spaces[6]!=' ')&&spaces[6]==spaces[7]&& spaces[7]==spaces[8]){
      spaces[6]==player? cout<<"\n***** YOU WON *****\n" : cout<<"\n***** YOU LOSED *****\n";
    }
    else if((spaces[0]!=' ')&&spaces[0]==spaces[3]&& spaces[3]==spaces[6]){
      spaces[0]==player? cout<<"\n***** YOU WON *****\n" : cout<<"\n***** YOU LOSED *****\n";
    }
    else if((spaces[1]!=' ')&&spaces[1]==spaces[4]&& spaces[4]==spaces[7]){
      spaces[1]==player? cout<<"\n***** YOU WON *****\n" : cout<<"\n***** YOU LOSED *****\n";
    }
    else if((spaces[2]!=' ')&&spaces[2]==spaces[5]&& spaces[5]==spaces[8]){
      spaces[2]==player? cout<<"\n***** YOU WON *****\n" : cout<<"\n***** YOU LOSED *****\n";
    }
    else{
      return false;
    }
  return true;
}
bool check_spaces_full(char *spaces){
   int decision=0;
   for(int i=0;i<=8;i++){
    if(spaces[i]!=' '){
      return false;
    }
   }
   cout<<"***** Draw *****";
   return true;
}
int main(){
  cout<<"\nRULES: To win align your crosses either vertically or horizontally\n";
  char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
  char player='X';
  char computer='O';
  bool running=true;
  draw_board(spaces);
  while(running==true){
    player_move(spaces,player);
    draw_board(spaces);
    if(check_winner(spaces,player,computer)){
      running=false;
      break;
    }
    else if(check_spaces_full(spaces)){
       running=false;
      break;
    }
    computer_move(spaces,computer);
    draw_board(spaces);
    if(check_winner(spaces,player,computer)){
      running=false;
      break;
    }
    else if(check_spaces_full(spaces)){
       running=false;
      break;
    }else if(check_spaces_full(spaces)){
       running=false;
      break;
    }
  }
  cout<<"***** Thanks for Playing *****\n";
  return 0;
}