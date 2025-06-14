#include <stdio.h>

struct Point {
	int x;
	int y;
};

struct Rect {
	struct Point lt;
	struct Point rb;
};

int is_crossed(struct Rect a, struct Rect b);
struct Rect scanfRect();
void printRect(struct Rect a);

int main()
{
	struct Rect a;
	struct Rect b;
	
	a = scanfRect();
	b = scanfRect();

	printRect(a);
	printRect(b);
	
	int result = is_crossed(a, b);
	printf("%d", result);
	
	return 0;	
	
}

struct Rect scanfRect() {
	struct Rect result;
	
	scanf("%d", &result.lt.x);
	scanf("%d", &result.lt.y);
	scanf("%d", &result.rb.x);
	scanf("%d", &result.rb.y);

	return result;
}

void printRect(struct Rect a) {
	printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
}


int is_crossed(struct Rect a, struct Rect b) {
	int result = 0;
	if (((a.rb.y <= b.lt.y) && (a.lt.y >= b.rb.y)) && ((a.lt.x <= b.rb.x) && (a.rb.x >= b.lt.x))) {
		result = 1;
	}
	return result;
}
