#include<bits\stdc++.h>
using namespace std;
int main(){
   double base,height,hypothenus;
   cout<<"What is the Base and the Height of your Right angled Triangle: "<<endl;
   cin>>base;
   cin>>height;
   hypothenus=sqrt(pow(base,2)+pow(height,2));
   cout<<"the hypothenus is: "<<hypothenus;
   return 0;
}  