#include <stdio.h>

int triangle_len_type(int a, int b, int c);
void sort2(int * a, int *b);
void sort3(int * x, int * y, int * z);


int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int result = triangle_len_type(a, b, c);

	printf("%d", result);

	return 0;
}


int triangle_len_type(int a, int b, int c) {
	int result = -1;
	sort3(&a, &b, &c);
	if (a > 0 && b > 0 && c > 0) { 
		if (a == b || b == c || c == a) {
			if (a * a + b * b >= c * c) {
				result = 1;
			}
		}
		if(a == b && a == c && b == c) {
			result = 2;
		}
		
		if (a != b && b != c && c != a) {
			if (a * a + b * b >= c * c) {
				result = 0;
			}
		}

	}
	return result;
}


void sort2(int * a, int * b)
{
        int holder = 0;
        if (*a > *b) {
                holder = *a;
                *a = *b;
                *b = holder;
        }
}

void sort3(int * x, int * y, int * z) 
{
        sort2(x, y);
        sort2(x, z);
        sort2(y, z);  
}
