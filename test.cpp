#include <stdio.h>
#include <iostream>
extern int num1, num2;

int main(){
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}
