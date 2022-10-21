#include<locale.h>
#include<stdio.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	/*int x;
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
	*/
	printf("\n\n");
	puts("Задание 1");
	int m, n, s,i;
	puts("Введите значения");
	scanf_s("%d\n %d", &n,&m);
	for (i = m, s = 0; i <= n; i++)
	{
		s += i;
		printf("выполнено %d раз\n", i + 1);
	}
	printf("результат %d\n", s);

}
