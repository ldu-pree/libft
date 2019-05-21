\\
\\
\\THIS
\\IS
\\A
\\BACKUP
\\
\\
\\
\\
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
  //is alnum
  printf("\n\nalnum\n");
  for (loop = 0;loop < 26;loop += 1)
    if (ft_isalnum(alpha[loop]) != 1)
      printf("error ");
  for (loop = 0;loop < 10;loop += 1)
    if (ft_isalnum(num[loop]) != 1)
      printf("error ");
  //is alpha
  printf("\n\nalpha\n");
  for (loop = 0;loop < 26;loop += 1)
    if (ft_isalpha(alpha[loop]) != 1)
      printf("error ");
  //is ascii
  printf("\n\nascii\n");
  for (loop = 0;loop < 128;loop += 1)
    if (ft_isascii(loop) != 1)
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
  //tolower
  printf("\n\ntolower\n");
  for(loop = 0;loop < 26;loop += 1)
    printf("%c",ft_tolower(ft_toupper(alpha[loop])));
  //strcmp
  printf("\n\nstrcmp\n");
  if (ft_strcmp("lol","lol") == 0)
    printf("pass 1 ");
  if (ft_strcmp("b$1","b$11") == 0)
    printf("pass 2 ");
  if (ft_strcmp("lol1@b","lol1@") == 0)
    printf("pass 3 ");
  if (ft_strcmp("liam","lIam") == 1)
    printf("pass 4 ");
  //strncmp
  printf("\n\nstrncmp\n");
  if (ft_strncmp("lol","lol",5) == 0)
    printf("pass 1 ");
  if (ft_strncmp("b$1","b$11",4) == 0)
    printf("pass 2 ");
  if (ft_strncmp("lol1@b","lol1@",3) == 0)
    printf("pass 3 ");
  if (ft_strncmp("liam","lIam",4) == 1)
    printf("pass 4 ");
  //ft_strstr
  printf("\n\nstrstr\n");
  printf("%s %p %p\n",ft_strstr(strvar1,strtest1),ft_strstr(strvar1,strtest1),&strvar1[1]);
  for(loop = 0;loop < 4;loop++)
    printf("%p ",&strvar1[loop]);
  printf("\n%s %p %p %s\n",ft_strstr(strvar2,strtest2),ft_strstr(strvar2,strtest2),&strvar2[6],&strvar2[6]);
  //ft_strnstr
  printf("\n\nstrnstr\n");
  printf("%s %p %p\n",ft_strnstr(strvar1,strtest1,2),ft_strnstr(strvar1,strtest1,2),&strvar1[1]);
  printf("%s %p %p\n",ft_strnstr(strvar2,strtest2,3),ft_strnstr(strvar2,strtest2,3),&strvar2[6]);
  //ft_strrchr
  printf("\n\nstrchr\n");
  printf("%s %p %p\n",ft_strchr(alpha,'d'),ft_strchr(alpha,'d'),&alpha[3]);
  printf("%s %p %p\n",ft_strchr(alpha,'g'),ft_strchr(alpha,'g'),&alpha[6]);
  printf("%s %p %p\n",ft_strchr(alpha,'x'),ft_strchr(alpha,'x'),&alpha[23]);
  //ft_strrchr
  printf("\n\nsrtrchr\n");
  printf("%s %p %p\n",ft_strrchr(strvar1,'l'),ft_strrchr(strvar1,'l'),&strvar1[3]);
  printf("%s %p %p\n",ft_strrchr(strvar2,'s'),ft_strrchr(strvar2,'s'),&strvar2[13]);
  printf("%s %p %p\n",ft_strrchr(strvar1,'\0'),ft_strrchr(strvar1,'\0'),&strvar1[4]);
}
