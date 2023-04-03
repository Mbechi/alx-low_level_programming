#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
void set_string(char **s, char *to);
int _putchar(char c);
char print_diagsums(int *a, int size);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_chessboard(char (*a)[8]);
char *_strchr(char *s, char *c);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, *accept);

#endif
