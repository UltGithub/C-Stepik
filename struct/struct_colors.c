#include <stdio.h>

typedef struct
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
} Color;


Color getColor();

unsigned long long convertToHTML(Color);

Color convertToRGB(unsigned long long);

void printRGB(Color);

void printHTML(Color);

int main()
{
	Color z, z2;
	unsigned long long html;

	z = getColor();
	printRGB(z);

	html = convertToHTML(z);
	printf("%llu\n", html);
	printHTML(z);

	z2 = convertToRGB(html);
	printRGB(z2);

	return 0;
}

Color getColor() 
{
	Color result;
	
	int red_int = 0;
	scanf("%d", &red_int);
	result.red = red_int;

	int green_int = 0;
	scanf("%d", &green_int);
	result.green = green_int;

	int blue_int = 0;
	scanf("%d", &blue_int);
	result.blue = blue_int;

	return result;
}

void printRGB(Color value)
{
	printf("%u ", value.red);
	printf("%u ", value.green);
	printf("%u\n", value.blue);
}

unsigned long long convertToHTML(Color value)
{
	unsigned long long result;
	result = ((256 * 256) * value.red);
	result += (256 * value.green);
	result += value.blue;
	return result;
}

Color convertToRGB(unsigned long long value)
{
	Color result;
	result.blue = value % 256;
	result.green = (((value - result.blue) % (256 * 256)) / 256);
	result.red = (value - result.green - result.blue) % (256 * 256 * 256) / (256 * 256);
	return result;
}

void printHTML(Color value)
{
	printf("2%X", value.red);
	
	printf("2%X", value.green);
	printf("2%X\n", value.blue);
}

	 
