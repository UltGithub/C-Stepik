#include <stdio.h>
#include <assert.h>
#include <math.h>

typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	Point a;
	Point b;
} Line;

float distance(Point p1, Point p2)
{
	int dx = p1.x - p2.x;
	int dy = p1.y - p2.y;
	return sqrt(dx*dx + dy*dy);
}


float length(Line p1)
{
	return distance(p1.a, p1.b); 
}

void printLine (Line s)
{
	printf("(%d,%d) (%d,%d) \n", s.a.x, s.a.y, s.b.x, s.b.y);
}

int is_equal(Point p1, Point p2) 
{
	return p1.x == p2.x && p1.y == p2.y;	
}	

int is_equalLine(Line p1, Line p2)
{
	return is_equal(p1.a, p2.a) && is_equal(p1.b, p2.b);
}

Point movePoint1(Point p, int dx)
{
	Point res = p;
	res.x += dx;
	return res;
}

void movePoint2(Point * p, int dx)
{
	p->x += dx;
}

Line moveLine1(Line s, int dx) 
{
	Line res;
	res.a = movePoint1(s.a, dx);
	res.b = movePoint1(s.b, dx);
	return res;
}

void moveLine2(Line * p, int dx) 
{
	movePoint2( &p -> a, dx);
	movePoint2( &p -> b, dx);
}


int main() {
	Line s = {{2, 3}, {5, 7}};	
	Line s_new = moveLine1(s, 3);
	printLine(s_new);
	Line exp_line = {{5, 3}, {8, 7}};
	assert(is_equalLine(s_new, exp_line));

	exp_line.a.x += 3;
	exp_line.b.x += 3;
	moveLine2(&s_new, 3);
	printLine(s_new);
	assert(is_equalLine(s_new, exp_line));	


	return 0;
}
