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

float distance(Point a, Point b);
void scanLine(Line * t);
void printLine(Line t);
void rotRLine(Line * t);

int main() {
	Line t;

	scanLine(&t);

	printLine(t);

	return 0;

}

void scanLine(Line * t) {

	scanf("%d", &t->a.x);
	scanf("%d", &t->a.y);
	scanf("%d", &t->b.x);
	scanf("%d", &t->b.y);
	scanf("%f", &t->len);
}

void printLine(Line t) {

	printf("%d ", t.a.x);
	printf("%d ", t.a.y);
	printf("%d ", t.b.x);
	printf("%d ", t.b.y);
	printf("%f ", t.len);
}

void rotRLine(Line * t) {
	


