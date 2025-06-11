#include <stdio.h>
typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	Point a;
	Point b;
	float len;
} Line;

//float distance(Point a, Point b);
void scanLine(Line * t);
void printLine(Line t);
//void rotRLine(Line * t);

int main() {
	Line t;

	scanLine(&t);
//	rotRLine(&t);
	printLine(t);
	
	return 0;
}

// void rotRLine(Line * t) {
// 	int holder = 0;
// 	t->a.x = holder;
// 	t->a.x = t->a.y;
// 	t->a.y = holder;
// 	t->b.x = holder;
// 	t->b.x = t->b.y;
// 	t->b.y = holder;
// }

void scanLine(Line * t) {

	scanf("%d", t->a.x);
	scanf("%d", t->a.y);
	scanf("%d", t->b.x);
	scanf("%d", t->b.y);
	scanf("%f", t->len);
}

void printLine(Line t) {
	printf("%d %d %d %d %f", t.a.x, t.a.y, t.b.x, t.b.y, t.len);
}


