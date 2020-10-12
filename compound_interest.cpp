#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ 
float year,amount,principal=1000.0,rate=0.05;
cout<<fixed<<setprecision(2)<<"year"<<setw(15)<<"amount"<<"\n";
for(year=1.0;year<=10.0;year++)

{
amount=principal*pow(1.0+0.05,year);
cout<<setw(4)<<year<<setw(15)<<amount<<endl;
}}    


