#include "main.h"
/**
 * times_table - prints the times table
 */
void times_table(void)
{
	int a;
	int b;
	int prod;
	
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			prod = a * b;
			
			if (prod < 10)
                        {
                                _putchar(' ');
                        }
                        else
                        {
                                _putchar('0' + (prod / 10));
                        }

                        _putchar('0' + (prod % 10));

                        if (b < 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                        else
                        {
                                _putchar('\n');
                        }
                }
        }
}
