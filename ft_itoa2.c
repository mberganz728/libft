static int ft_intlen(int n)
{
  int i;
  
  i = 0;
  if (n == -2147483648)
      return (11);
  if (n == 0)
      return (1);
  if (n < 0)
  {
    i++;
    n *= -1;
  }
  while (n > 9)
  {
    n = n / 10;
    i++;
  }
  i++;
  return (i);
}

char  *ft_itoa(int n)
{
  int   nlen;
  char  *mit;
  
  nlen = ft_intlen(n);
  mit = (char *)malloc((nlen + 1) * (sizeof(char)));
  mit[0] = '-';
  if (n == 0)
      mit[0] = 48;
  mit[nlen] = '\0';
  if (n > 0)
      n *= -1;
  while (n < 0)
  {
    mit[nlen - 1] = ((n % -10 * -1) + 48);
    n = n / 10;
    nlen--;
  }
  return (mit);
}
#include <stdio.h>
int main()
{
  printf("%s", ft_itoa(0));
  return (0);
}