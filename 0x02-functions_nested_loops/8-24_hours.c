#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minute;
	int hour_digit1;
	int hour_digit2;
	int minute_digit1;
	int minute_digit2;

	for (hour = 0; hour < 24; hour++)
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
				hour_digit1 = 0;
			else
				hour_digit1 = hour / 10;
			hour_digit2 = hour % 10;
			if (minute < 10)
				minute_digit1 = 0;
			else
				minute_digit1 = minute / 10;
			minute_digit2 = minute % 10;
			_putchar(hour_digit1 + '0');
			_putchar(hour_digit2 + '0');
			_putchar(':');
			_putchar(minute_digit1 + '0');
			_putchar(minute_digit2 + '0');
			_putchar('\n');
		}
}
