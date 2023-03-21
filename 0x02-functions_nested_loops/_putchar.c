#include "main.h"
#include <unistd.h>
/**
*_putchar -writesthe character c to stdouy
*
*Return; On success 1.
*On error, -1 is returned ,and errno is set appropriately
*/
it _putchar(char c)
{
return (write (1, &c, 1));
}
