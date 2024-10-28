#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int my_array[3][4][5];
    cout<<"enter 27 vlues: ";
    for (int i=0;i<=2;i++){
        for(int j=0;j<=3;j++){
            for(int k=0;k<=4;k++){
                cin>>my_array[i][j][k];
            }
        }
    } 
}