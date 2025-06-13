#include <stdio.h>

int main() 
{
        int a, b, a1, a2, b1, b2;

        scanf("%d:%d", &a1, &b1);
        scanf("%d:%d", &a2, &b2);

	a = a1 + a2;
	b = b1 + b2;

	printf("%d:%d\n", a, b);
        if (a > b) {
                printf("2");
        } else if (a == b) {
                printf("1");
        } else {
                printf("0");
        }
        return 0;
}
