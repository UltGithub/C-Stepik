#include <stdio.h>

int main() 
{
	int N, K;
	
	scanf("%d", &N);
	scanf("%d", &K);

	N = N / 4;
	if (N <= K) {
		printf("%d", N);
	} else {
		printf("%d", K);
	}
	
	return 0;
}
