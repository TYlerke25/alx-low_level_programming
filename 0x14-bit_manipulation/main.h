#ifndef MAIN_H
#define MAIN_H
unsighned int binery_to_uint(const char *b);
void print_binary(unsighned long int n);
int get_bit(unsighned long int n, unsighned int index);
int set_bit(unsighned long int *n, unsighned int index);
int clear_bit(unsighned long int *n, unsighned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);
#endif
