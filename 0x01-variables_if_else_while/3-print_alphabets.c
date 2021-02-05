#include <stdio.h>
/**
 * main - ALPHABET
 * Description: use 3 putchar
 * Return: void
 */
int main(void)
{
  char ch, hc;

  for (ch = 'a' ; ch <= 'z' ; ch++)
    {
      putchar(ch);
    }
  for (hc = 'A' ; hc <= 'Z' ; hc++)
    {
      putchar(hc);
    }
  putchar('\n');
  return (0);
}
