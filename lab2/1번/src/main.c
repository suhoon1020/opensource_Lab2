#include <stdio.h>
#include "testlib.h"

int main(void){
	int a, b;
	printf("두 수를 입력해 주세요 : ");
	scanf("%d %d", &a, &b);
	
	printf("add : %d\n", add(a, b));
	printf("sub : %d\n", subtract(a, b));
	printf("mul : %d\n", multiply(a, b));
	printf("div : %d\n", divide(a, b));

	return 0;
}