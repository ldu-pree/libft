#include "libft.h"
#include <stdio.h>

int main()
{
  int loop = 0;
  int c = 0;
  //
  //
  //test variables
  char *alpha = "abcdefghijklmnopqrstuvwxyz";
  char *num = "6";
  //char *alphnum = "!@#$%^&*()";
  char *errprint = "\n";
  char *canprint = "1a/.12Rgs";
  //char *strvar1 = "klol";
  //char *strtest1 = "lol";
  //char *strvar2 = "kloloktestvars";
  //char *strtest2 = "test";
  //char *ret;
  //
  //
  //Title
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
  printf("\n\n\n");
  //
  //
  //atoi
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		     atoi\n");
  printf("This Will Print The Sum Of Char 6 And Int 9\n");
  printf("		      ");
  printf("%d\n",ft_atoi(num) + 9);
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n");
  //
  //
  //is alpha
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		   isalpha\n");
  printf("If It Doesn't Print Anything It Works :D\n");
  for (loop = 0;loop < 26;loop += 1)
    if (ft_isalpha(alpha[loop]) != 1)
      printf("error ");
  printf("\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n");
  //
  //
  //is digit
  //printf("\n\nisdigit\n");
  //for (loop = 0;loop < 10;loop += 1)
  //  if (ft_isdigit(num[loop]) != 1)
  //    printf("error ");
  //
  //
  //strlen
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		    strlen\n");
  printf("This Will Print The Lenght Of (Hello World)\n");
  printf("		      ");
  printf("%d\n",ft_strlen("hello world"));
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n");
  //
  //
  //is print
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		   isprint\n");
  printf("If It Doesn't Print Anything It Works :D\n");
  if (ft_isprint(errprint[0]))
    printf("error ");
  for (loop = 0;loop < 9;loop += 1)
    if (ft_isprint(canprint[loop]) != 1)
      printf("error ");
  printf("\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n");
  //
  //
  //toupper
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		   toupper\n");
  printf("This Is Still In Development\n");
  printf("    ");
  for(loop = 0;loop < 26;loop += 1)
    printf("%c",ft_toupper(alpha[loop]));
  printf("\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n");
  //
  //
  //putchar
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		   putchar\n");
  printf("If The Output Is (a) Then It Worked\n");
  printf("    ");
  ft_putchar('a');
  printf("\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n");
  //
  //
  //isdigit
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		   isdigit\n");
  printf("It Will Return 1 If 6 Is A Digit Else 0\n");
  printf("%d\n",ft_isdigit(6));
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n\n");
  //
  //
  //strdup
  c = 0;
  printf("\n\n");
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  c = 0;
  printf("\n");
  printf("		    strdup\n");
  printf("It Will Print (Hello World) If It Works\n");
  printf("%s\n",ft_strdup("Hello World"));
  while (c <= 4)
  {
    printf("--==+==--");
    c++;
  }
  printf("\n\n");
  //
  //
  //clean
  printf("||||||||\n");
  printf("VVVVVVVV");
  printf("\nCLEANING\n");
  printf("||||||||\n");
  printf("VVVVVVVV\n");
}
