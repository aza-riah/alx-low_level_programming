#include <stdio.h>

int main(void)
{
	char size_char;
	int size_int;
	long int size_lg_int;
	long long size_lg_lg;
	float size_float;

	printf("size of char: %lu byte(s)\n", sizeof(size_char));
	printf("size of int: %lu byte(s)\n", sizeof(size_int));
	printf("size of long int: %lu byte(s)\n", sizeof(size_lg_int));
	printf("size of long long int: %lu byte(s)\n", sizeof(size_lg_lg));
	printf("size of float: %lu byte(s)\n", sizeof(size_float));
}
