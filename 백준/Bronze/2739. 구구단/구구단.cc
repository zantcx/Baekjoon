#include <stdio.h>

int main(void){
	
	int A;
	scanf("%d", &A);
	
	for(int i=1; i <= 9; i++){
		printf("%d * %d = %d\n", A, i, A*i);
	}
	return 0;
}