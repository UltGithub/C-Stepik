#include <stdio.h>

void simpleFactors(unsigned int a, unsigned int last, unsigned int n);


int main()
{
	unsigned int a;
	scanf("%u", &a);
	simpleFactors(a, 2, 0);

	return 0;
}
