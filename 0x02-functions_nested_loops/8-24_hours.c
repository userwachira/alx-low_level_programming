#include "main.h"
/**
 * jack_bauer- prints the minutes of the day
 * Return: 0
 */
void jack_bauer(void)
{
	for (int hour = 0; int hour < 24; hour++)
	{
		for (int minute = 0; int minute < 60; minute++)
		{
			_putchar("%02d:%02d\n", minute, hour);
		}
	}
}
