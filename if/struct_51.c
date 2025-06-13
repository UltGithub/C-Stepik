#include <stdio.h>

struct Point {
	int x;
	int y;
};

struct Rect {
	struct Point lt;
	struct Point rb;
};

struct Rect * max (struct Rect * pa, struct Rect * pb);

int main()
{
	struct Rect a;
	struct Rect b;

	scanf("%d %d %d %d", &a.lt.x, &a.lt.y, &a.rb.x, &a.rb.y);
	scanf("%d %d %d %d", &b.lt.x, &b.lt.y, &b.rb.x, &b.rb.y);


	int sum_a = (a.rb.x - a.lt.x) * (a.lt.y - a.rb.y);
	int sum_b = (b.rb.x - b.lt.x) * (b.lt.y - b.rb.y);


	printf("%d %d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y, sum_a);
	printf("%d %d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y, sum_b);

	struct Rect * result = max(&a, &b);
	
	int sum = (result->rb.x - result->lt.x) * (result->lt.y - result->rb.y);

	printf("%d", sum);
		
	return 0;
}

struct Rect * max (struct Rect * pa, struct Rect * pb) {
	
	struct Rect * result;

	int sum_a = (pa->rb.x - pa->lt.x) * (pa->lt.y - pa->rb.y);
	int sum_b = (pb->rb.x - pb->lt.x) * (pb->lt.y - pb->rb.y);

	if (sum_a >= sum_b) {
		result = pa;
	} else {
		result = pb;
	}

	return result;

}	
