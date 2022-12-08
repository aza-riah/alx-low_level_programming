#include <stdio.h>

int main(void)
{
char c_char;
int c_int;
long int c_long;
long long c_long_long;
float c_float;

printf("size of char: %lu byte(s)\n", sizeof(c_char));
printf("size of int: %lu byte(s)\n", sizeof(c_int));
printf("size of long int: %lu byte(s)\n", sizeof(c_long));
printf("size of long long int: %lu byte(s)\n", sizeof(c_long_long));
printf("size of float: %lu byte(s)\n", sizeof(c_float));
}
