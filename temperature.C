/*Tyler Allen
CS111
3-5-2015
Assignment 3 Program 3
This program will convert a temperature between Fahrenheit and Celsius to the other unit.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){//main function
  char temp;
  double fahrenheit;
  double celsius;
 //declare variables
  cout<<"Which temperature do you have? Enter F for Farenheit or C for Celsius: ";
  cin>>temp;
  if(temp!='C'&&temp!='c'&&temp!='F'&&temp!='f')
    {
      cout<<"Invalid choice"<<endl;
    }
  else if(temp=='C'||temp=='c')
    {
     cout<<"Enter a temperature in Celsius: ";//ask for temperature input
     cin>> celsius;//assign input to celsius

     fahrenheit =9.0/5.0*celsius+32.0;//assign fahrenheit
     cout<<celsius<<" Celsius = "<<fixed<<setprecision(2)<<fahrenheit<<" Fahrenheit"<<endl;
    }
  else
    {
      cout<<"Enter a temperature in Fahrenheit: ";
      cin>>fahrenheit;

      celsius=(fahrenheit-32)*5.0/9.0;
      cout<<fahrenheit<<" Fahrenheit = "<<fixed<<setprecision(2)<<celsius<<" Celsius"<<endl;
    }
 return 0;
}
