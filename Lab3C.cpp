#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

char a,b;
int c,d;
double e,f;

//prompt and search for two character varaibles
printf("Please type two characters: ");
scanf("%c %c",&a,&b);

// prompt and search for two integer varaibles
printf("Please type two integers: ");
scanf("%d %d",&c,&d);

//prompt and search for two double varaibles
printf("Please type two double values: ");
scanf("%lf %lf",&e,&f);

printf("you just entered: a=%c, b=%c, c=%d, d=%d, e=%f, f=%e\n",a,b,c,d,e,f);



return 0; 
}
