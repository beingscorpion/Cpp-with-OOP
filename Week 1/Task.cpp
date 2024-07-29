#include <iostream>
using namespace std;


int main(){


cout<<"Size of int :"<<sizeof(int)<<" byte"<<endl;
cout<<"Size of char :"<<sizeof(char)<<" byte"<<endl;
cout<<"Size of float :"<<sizeof(float)<<" byte"<<endl;
cout<<"Size of long :"<<sizeof(long)<<" byte"<<endl;
cout<<"Size of double :"<<sizeof(double)<<" byte"<<endl;


char letter;

cout<<"Letter : ";
cin>>letter;

cout<<"ASCII value of "<<letter<<" is: "<<(int)letter;


int a=2;
int b=5;

a=a+b;
b=a-b;
a=a-b;

cout<<endl<<a<<endl<<b<<endl;

int temp;

cout<<"Temp  in Celsius:";
cin>>temp;

cout<<"Temp in Fahrenheit: "<<temp*((float)9/5)+32;

return 0;

}

