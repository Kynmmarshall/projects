#include <iostream>
using namespace std;

int main() {
   string value="";
   cout<<"Type the Temperature you want to convert: "<<endl;
   int kelvin,celsius;
   cin>>kelvin;
   celsius=kelvin;
   cout<<"Is this temperature in kelvin or in degree celsius (type either 'kelvin' or 'celsius'): ";
   cin>>value;
   if (value=="kelvin"){
   celsius=kelvin-273;
   cout<<"The Temperature in degree celsius is: "<<celsius<<" degree celsius";
   }
   else if (value=="celsius"){ 
      kelvin=celsius+273;
      cout<<"The Temperature in degree celsius is: "<<kelvin<<" kelvin";
   }
   else{
      cout<<"You entered a wrong input rerun the code";
   }
   
   return 0;
}