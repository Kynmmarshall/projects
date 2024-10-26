#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){ int sum=0,temp=0;
  int numbers[10]={2,1,5,4,3,6,9,10,8,7};
  for(int i=0;i<sizeof numbers/sizeof numbers[0];i++){
    for(int j=0;j<(sizeof numbers/sizeof numbers[0])-i-1;j++){
    if (numbers[j]>numbers[j+1]){
      temp=numbers[j];
      numbers[j]=numbers[j+1];
      numbers[j+1]=temp;
    }
    
    }
    cout<<numbers[i]<<" ";
   }

   return 0;
}