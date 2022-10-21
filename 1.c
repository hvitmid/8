#include<locale.h>
#include<stdio.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int n;
	scanf_s("%d", &n);
	for (int start = 1; start <= 10; start++)
		putchar('*');
	for (int start = 0; start <= 0; start++);
		putchar('+');
	for (int start = 1; start <= n; start++)
		putchar('*');
	for (int start = 0; start <= 0; start++)
		putchar('+');
}
