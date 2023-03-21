#include <stdio.h>
	#include "main.h"


	/**
	 * print_to_98 - prints all natural numbers from n to 98,
	 * followed by a new line
	 * @n: print from this number
	 */
	void print_to_98(int n)
	{
		int i, j;


		if (n <= 98)
		{
			for (i = n; i <= 98; i++)
			{
				if (i != 98)
					printf("%d, ", i);
				else if (i == 98)
					printf("%d\n", i);
			}
		} else if (n >= 98)
		{
			for (j = n; j >= 98; j--)
			{
				if (j != 98)
					printf("%d, ", j);
				else if (j == 98)
					printf("%d\n", j);
			}
		}
	}
#include "main.h"


	/**
	 * main - check the code
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    print_to_98(0);
	    print_to_98(98);
	    print_to_98(111);
	    print_to_98(81);
	    print_to_98(-10);
	    return (0);
	}
