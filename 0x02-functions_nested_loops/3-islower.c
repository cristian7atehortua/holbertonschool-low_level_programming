#include "main.h"
/**
 *_islower - checks for lowercase character
 *Return: 1 if c is lowercase
 *On error: 0 is returned
 */
int _islower(int c)
{
char abc = 'a';
int ret = 0;
while (abc <= 'z')
{
if (c == abc)
{
ret = 1;
}
abc++;
}
return (ret);
}
