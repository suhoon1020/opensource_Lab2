#include <stdio.h>
#include <stdlib.h>

#define ASSERT_LAB(x) do {\
	if (!(x)) { \
		fprintf(stdout,"조건(%s)에 맞지않음.\n", #x);\
		abort(); \
	}\
} while(0)