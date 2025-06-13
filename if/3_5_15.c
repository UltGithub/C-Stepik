#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	
	int a = (x % 15);
	int b = (x % 3);
	int c = (x % 5);

	if (a != 0) {
		if ((b == 0) || (c == 0)) {
			printf("YES");
		} else {
			printf("NO");  
		}
	} else {
		printf("NO");
	}

	return 0;
}
