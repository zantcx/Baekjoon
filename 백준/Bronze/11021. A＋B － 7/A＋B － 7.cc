#include <stdio.h>

int main(void){
	
	int T;
	scanf("%d", &T);
	int A[T];
	int B[T];
	
	for(int i = 1; i<= T; i++){
		scanf("%d %d", &A[i], &B[i]);
	}
	for(int i = 1; i<= T; i++){
		printf("Case #%d: %d\n", i, A[i]+B[i]);
	}
	return 0;
}