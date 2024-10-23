#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int rows,columns,half_rows,half_row;
    cout<<"How many rows do you want your diamond to have (type an odd number)? "<<endl;
    cin>>rows;
    half_rows=floor(rows/2);
    half_row=half_rows+1;
    for (int i=1;i<=half_row;i++){
        for(int j=half_rows--;j>=1;j--)
          cout<<" ";
          
        for(int k=1;k<=i;k++)
            cout<<"* ";
        
          cout<<"\n";
    }

    half_rows=floor(rows/2);
    half_row=half_rows+1;
    int half=half_rows-1;
    for (int i=half_row;i>=1;i--){
        for(int j=half++;j>=1;j--)
          cout<<" ";
          
        for(int k=1;k<i;k++)
            cout<<"* ";
        
          cout<<"\n";
    }
   return 0;
}