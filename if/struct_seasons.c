#include <stdio.h>

typedef struct
{
	int yy;
	char mm;
	char dd;
} Data;

typedef struct
{
	int yy;
	char season;
	int day;
} Season;

Data getData();

void printData(Data);

Season convToSeas(Data);

void printSeas(Season);

int main()
{
	Data dat;
	Season seas;
	dat = getData();
	printData(dat);
	seas = convToSeas(dat);
	printSeas(seas);

	return 0;
}
