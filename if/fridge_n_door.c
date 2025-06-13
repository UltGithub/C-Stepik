#include <stdio.h>

void sort2(int * a, int * b);
void sort3(int * x, int * y, int * z);


int main()
{
	int w, h; // door
	int a, b, c; // fridge

	scanf("%d %d", &w, &h);
	scanf("%d %d %d", &a, &b, &c);

	sort2(&w, &h);
	sort3(&a, &b, &c);
	
	if ((w >= a) && (h >= b)) {
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0; 	
	
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
