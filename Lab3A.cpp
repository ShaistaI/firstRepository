/* Author: Shaista Inaganti (shaistaInaganti@my.unt.edu)
Date: 09/9/2026
Instructor:
Description: A small description in your own words
that describe what the program does. Any
additional flags needed to allow the
program to compile should also be placed
here.
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{

string name;
double salary;
int rate;
double bonus;
//prompt for and read full name of employee
cout<< "Please enter your name: "; 
getline(cin,name);

//prompt for and storesalary of employee
cout<< "Please enter your salary: ";
cin >>salary;

//Calculating the percent rate of bonus (value between 5 and 15)
cout<< "Please enter your rate: ";
cin>> rate;
bonus = salary * (static_cast<double>(rate)/100);
cout<<fixed << setprecision(2)<<bonus << endl;
cout<< name<< " earned a bonus of " <<setprecision(2) <<bonus<< endl;

return 0;
}




