// Calculating The volume

#include <iostream>
using namespace std;

int main()
{

float pi = 3.14159;
float radius;
float volume;
cout<< "what is the radius of the sphere(in cm)? "<< endl;
cin>> radius;

volume = (4.0/3.0) * pi * radius * radius * radius;

cout<<"The volume of the sphere is "<<  volume<<" cubic cm"<<endl;


return 0;
}
