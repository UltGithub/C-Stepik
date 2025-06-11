#include <stdio.h>

typedef struct {
	int h;
	int min;
} TicTac;

TicTac after(TicTac a, int min);
void forward(TicTac * me, TicTac a);
void backward(TicTac * me, TicTac a);
int isEqualTime(TicTac a, TicTac b);
void printTic(TicTac a);

int main() {
	TicTac a,b,c;
	int mk;

	scanf("%d:%d", &(a.h), &(a.min));
	scanf("%d", &mk);
	scanf("%d:%d", &(b.h), &(b.min));

	printf("equal: %d\n", isEqualTime(a,b));
	c = after(a, mk);
	printf("after: ");
	printTic(c);

	c = a;
	printf("forward: ");
	forward(&a, b);
	printTic(a);

	printf("backward: ");
	backward(&c, b);
	printTic(c);

	return 0;
}

TicTac after(TicTac a, int min) {
	int normal_mins = (a.h * 60) + a.min;
	normal_mins += min;
	TicTac res;
	res.h = normal_mins / 60 % 12;
	res.min = normal_mins % 60;
	return res;
}

void forward(TicTac * me, TicTac a) {
	int normal_mins = (me->h * 60) + me->min;
	normal_mins += (a.h * 60) + a.min;
	me->h = normal_mins /60 % 12;
	me->min = normal_mins % 60;
}

void backward(TicTac * me, TicTac a) {
	int normal_mins = (me->h * 60) + me->min;
	normal_mins -= (a.h * 60) + a.min;
	if (normal_mins < 0) 
	{
		normal_mins += 720;
	}
	me->h = normal_mins /60 % 12;
	me->min = normal_mins % 60;
}

int isEqualTime(TicTac a, TicTac b) {
	int res = 1;
	if (a.h != b.h || a.min != b.min) {
		res = 0;
	}
	return res;
}

void printTic(TicTac result) {
	printf("%02d:%02d \n", result.h, result.min);
} 
