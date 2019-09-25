#include"uhead.h"

struct op{
	int sum;
	float avg;
};
struct op opre(int *p)
{	 

	struct op *res;
	for(int n = 0; n <= 99; n++)
	{
		res->sum+=p[n];
		
	}
	res->avg = (float)res->sum/100;
	printf("sss");
	return *res;
}

