#include <stdio.h>

int main(void){
	int A, B;
	
	scanf("%d %d",&A, &B);
	
	int a = B%1000/100;
	int b = B%100/10;
	int c = B%10/1;
	
	printf("%d\n", A*c);
	printf("%d\n", A*b);
	printf("%d\n", A*a);
	printf("%d", A*B);
	
	return 0;
}
