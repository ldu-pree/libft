#include "libft.h"
#include <stdio.h>

int main()
{
  int loop = 0;
  int c = 0;
  //test
  char *alpha = "abcdefghijklmnopqrstuvwxyz";
  char *num = "1234567890";
  char *alphnum = "!@#$%^&*()";
  char *errprint = "\n";
  char *canprint = "1a/.12Rgs";
  char *strvar1 = "klol";
  char *strtest1 = "lol";
  char *strvar2 = "kloloktestvars";
  char *strtest2 = "test";
  char *ret;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("Welcome To Liam's Libft Testing Software :D\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n");
  //atoi
  printf("\n\n---==+==---\n   atoi\n");
  printf("%d\n",ft_atoi(num));
  printf("---==+==---");
  //is alpha
  printf("\n\nalpha\n");
  for (loop = 0;loop < 26;loop += 1)
    if (ft_isalpha(alpha[loop]) != 1)
      printf("error ");
  //is digit
  printf("\n\nisdigit\n");
  for (loop = 0;loop < 10;loop += 1)
    if (ft_isdigit(num[loop]) != 1)
      printf("error ");
  //is print
  printf("\n\nisprint\n");
  if (ft_isprint(errprint[0]))
    printf("error ");
  for (loop = 0;loop < 9;loop += 1)
    if (ft_isprint(canprint[loop]) != 1)
      printf("error ");
  //toupper
  printf("\n\ntoupper\n");
  for(loop = 0;loop < 26;loop += 1)
    printf("%c",ft_toupper(alpha[loop]));
}
