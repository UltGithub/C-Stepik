#include <stdio.h>

int main() 
{
	int n, k_rice, k_veg;
	scanf("%d", &n);
	scanf("%d", &k_rice);
	scanf("%d", &k_veg);

	printf("%d %d %d\n", n, k_rice, k_veg);

	
	int sum = k_rice + k_veg * 2;
	printf("%d\n", sum);
	
	if (n >= sum) printf("YES");
	return 0;
}
