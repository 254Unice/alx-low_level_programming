[7:45 pm, 11/04/2022] Sam ALX: #include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, e;

i = 48;
e = 48;
while (e < 58)
{
i = 48;
while (i < 58)
{
if (e != i && e < i)
{
putchar(e);
putchar(i);
if (i == 57 && e == 56)
{
break;
}
putchar(',');
putchar(' ');
}
i++;
}
e++;
}
putchar('\n');
return (0);
}
[7:51 pm, 11/04/2022] Sam ALX: 101-print_comb4.c
[7:51 pm, 11/04/2022] Sam ALX: #include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m, l;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (l = 50; l < 58; l++)
{
if (l > m && m > n)
{
putchar(n);
putchar(m);
putchar(l);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

