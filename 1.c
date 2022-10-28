#include<locale.h>
#include<stdio.h>
#include<math.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	/*int x;
	puts("Задание 0");
	scanf_s("%d", &x);
	for (int start = 1; start <= 10; start++)
		putchar('*');
	printf("\n");
	for (int start = 0; start <= 0; start++);
	putchar('+');
	for (int start = 1; start <= x; start++)
		putchar('*');
	for (int start = 0; start <= 0; start++)
		putchar('+');
	printf("\n");
	for (int start = 0; start <= x; start++)
	{
		putchar('+');
		putchar('!');
	}

	printf("\n\n");
	puts("Задание 1");
	int m, n, s, i;
	puts("Введите значения");
	scanf_s("%d\n %d", &n,&m);
	for (i = m, s = 0; i <= n; i++)
	{
		s += i;
		printf("выполнено %d раз\n", i + 1);
	}
	printf("результат %d\n", s);
	*/

	puts("Задание 2");
	double x, t, y;
	puts("Введите х");
	scanf_s("%lf", &x);
	puts("Введите значение табуляции");
	scanf_s("%lf", &t);
	puts("     x        f");

	for (x, t; x >= 2 + t, x <= 4 + t; x += t)
	{
		y = pow(x, 3) + 3 * pow(x, 2) - 3;
		puts("------------------------");
		printf("| %lf | %5lf |\n", x, y);
	}
		puts("------------------------");
}
