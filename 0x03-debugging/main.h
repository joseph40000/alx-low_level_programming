#include "main.h"
#ifnder MAIN_H
#define MAIN_H
/**
*main - entry point of programs
*
*Return: return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	 printf("%d is zero\n", n);
#endif /* MAIN_H */
}
