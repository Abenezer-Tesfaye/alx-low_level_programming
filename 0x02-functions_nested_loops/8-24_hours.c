#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
int x;
int z;

for (x = 0; x <= 23; x++)
{
for (z = 0; z <= 59; z++)
{
_putchar (x / 10 + '0');
_putchar (x % 10 + '0');
_putchar (':');
_putchar (z / 10 + '0');
_putchar (z % 10 + '0');
_putchar ('\n');

}

}

}
