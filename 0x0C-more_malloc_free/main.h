#ifndef main_h
#define main_h

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_digit(char *s);
int _strlen(char *s);
void errors(void);
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
int main(int argc, char *argv[]);
int get_digit(char c);
void multiply(char *f, char *s);
int onlyNumbers(char *c);
char *_memset(char *s, char b, unsigned int n);
int _atoi(char *s);

#endif
