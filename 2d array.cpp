#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int my_array[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };
    for(int i=0;i<=1;i++){
      for(int j=0;j<=2;j++){
        cout<<my_array[i][j]<<" ";
      }
    }
    cout<<my_array[1][0];

}