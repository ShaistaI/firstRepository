#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

char firstInitial;
char secondInitial;

// generate seeded random number corresponding to ASCII values of A-Z
srand(static_cast<unsigned int>(time(0)));

firstInitial = static_cast<char>(rand()%26 +'A');
secondInitial = static_cast<char>(rand()%26 + 'A');

// displaying the randomly generated initials

cout<<"Here are your initials"<< endl;
cout<<firstInitial<<" "<<secondInitial<< endl; 


return 0; 
}

