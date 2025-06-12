#include <stdio.h>

typedef struct
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
} Color;

Color getColor();
unsigned long long convertToHTML(Color);
void printRGB(Color);
void printHTML(Color);

int main() {
	Color z;
	unsigned long long html;

	z = getColor();
	printRGB(z);


	html = convertToHTML(z);
	printf("%llu\n", html);
	
	printHTML(z);

//	z2 = convertToRGB(html);
//	printRGB(z2);

	return 0;
}

Color getColor() {
	Color result;
	int red = 0;
	scanf("%d", &red);
	result.red = red;

	int green = 0;
	scanf("%d", &green);
	result.green = green;

	int blue = 0;
	scanf("%d", &blue);
	result.blue = blue;	

	return result;
}

void printRGB(Color z) {
	printf("%u ", z.red);
	printf("%u ", z.green);
	printf("%u\n", z.blue);
}

void printHTML(Color z) {
	printf("%X", z.red);
	printf("%X", z.green);
	printf("%X\n", z.blue);
}

unsigned long long convertToHTML(Color z) {
	return ((unsigned long long) &z);
}

// This is where im stuck. Im trying to convert my RGB to html.
