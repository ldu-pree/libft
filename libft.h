
#ifndef _LIBFT_H_
#define _LIBFT_H_
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
  int ft_atoi(const char *str);
  int ft_isupper(char *str);
  void ft_putchar(char c);
  int ft_isalpha(char c);
  int ft_islower(char c);
  int ft_isdigit(int c);
  int ft_isprint(char c);
  int ft_toupper(int c);
  int ft_strlen(const char *str);
  void ft_putnbr(int nb);
  void *ft_memalloc(size_t size);
  void *ft_memset(void *b, int c, size_t len);
  char *ft_strdup(char *src);
  char *ft_strcat(char *s1, const char *s2);
  char *ft_strncat(char *s1, const char *s2, size_t n);
  void ft_bzero(void *s, size_t n);
  void *ft_memcpy(void *s1, const void *s2, size_t n);
  void *ft_memccpy(void *dst, const void *src, int c, size_t n);
#endif /* _LIBFT_H_ */
