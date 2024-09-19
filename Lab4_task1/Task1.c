#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d = 5e-12;
	scanf_s("%c%d%f%e", &c, &i, &f, &d);





}