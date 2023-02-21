#include <unistd.h>
/* _putchar print */
int _putchar(char c)
{
return (write(1, &c, 1));
}
