#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int get_strlen(char *str);
char *create_xarr(int size);
char *iter_zeroes(char *str);
void find_mul(char *prod, char *mult, int digit, int zeroes);
void sum_nums(char *final_prod, char *next_prod, int next_len);

#endif
