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
struct Rect intersection(struct Rect a, struct Rect b);



int main()
{
	struct Rect a, b;
	scanf("%d %d %d %d", &a.lt.x, &a.lt.y, &a.rb.x, &a.rb.y);
	scanf("%d %d %d %d", &b.lt.x, &b.lt.y, &b.rb.x, &b.rb.y);

	printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
	printf("%d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y);
	
	struct Rect res;
	if (is_crossed(a, b)) res = intersection(a, b);
	
	printf("%d %d %d %d", res.lt.x, res.lt.y, res.rb.x, res.rb.y);
	return 0;	
}

int is_crossed(struct Rect a, struct Rect b)
{
	int result = 0;
        if (((a.rb.y <= b.lt.y) && (a.lt.y >= b.rb.y)) && ((a.lt.x <= b.rb.x) && (a.rb.x >= b.lt.x))) {
                result = 1;
        }
        return result;
}

struct Rect intersection(struct Rect a, struct Rect b)
{
	struct Rect result;
	if (a.lt.x >= b.lt.x) {
		result.lt.x = a.lt.x;
	} else {
		result.lt.x = b.lt.x;
	}

	if (a.lt.y >= b.lt.y) {	
		result.lt.y = b.lt.y;		
	} else {
		result.lt.y = a.lt.y;
	}
	if (a.rb.x >= b.rb.x) {
		result.rb.x = b.rb.x;
	} else {
		result.rb.x = a.rb.x;
	}

	if (a.rb.y >= b.rb.y) {	
		result.rb.y = a.rb.y;		
	} else {
		result.rb.y = b.rb.y;
	}

	return result;
	
}
