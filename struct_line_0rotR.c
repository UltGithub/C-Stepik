#include <stdio.h>
#include <math.h>
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
        rotRLine(&t);
        printLine(t);

        return 0;
}




float distance(Point a, Point b) {
       float x_s = a.x - b.x;
       float y_s = a.y - b.y;
       x_s *= x_s;
       y_s *= y_s;
       float result = pow(x_s + y_s, 0.5);
       return result;
}

void rotRLine(Line * t) {

        
        int holder;
        holder = t->a.x;
        t->a.x = t->a.y;
        t->a.y = holder * -1;

        holder = t->b.x;
        t->b.x = t->b.y;
        t->b.y = holder * -1;
        t->len = distance(t->a, t->b);
}

void scanLine(Line * t) {

        scanf("%d", &t->a.x);
        scanf("%d", &t->a.y);
        scanf("%d", &t->b.x);
        scanf("%d", &t->b.y);
}

void printLine(Line t) {
        printf("%d %d %d %d %.3f", t.a.x, t.a.y, t.b.x, t.b.y, t.len);

}
