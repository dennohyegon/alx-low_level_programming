#include <stdio.h>
/**
 *main-counts the first 4000000 fibonacci numbers from prevous to current
 *Return: Always 0 (Success)
 */
int main(void)
{
int current = 2;
int previous = 1;
int temp;
int sum = 2;
while (current <= 4000000)
{
temp = current;
current += previous;
previous = temp;
if (current % 2 == 0)
{
sum += current;
}
}
printf("%d\n", sum);
return (0);
}
