#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){ int sum=0;
  int name[]={23,54,34,45};
  for(int i=0;i<=sizeof(name)/sizeof(int);i++){
      sum=sum+name[i];
  }
  cout<<"sum is " <<sum;
   return 0;
}