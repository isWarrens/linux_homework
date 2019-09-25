#include"uhead.h"

int p[100] = {0};
void show(int *p)
{	 
	 srand(time(NULL));
 
 	for(int n=0; n<=99; n++)
 	{
 		p[n] = 1000 * (rand()/(RAND_MAX+1.0));
 	}
 
	for(int a = 0; a<=100;a++ )
	{	
		
		printf("%d",p[a]);
	}
}
