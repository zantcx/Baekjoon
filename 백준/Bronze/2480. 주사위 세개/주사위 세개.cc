#include <stdio.h>

int main(void){
	int A, B, C, sum;
	
	scanf("%d %d %d",&A, &B, &C);
	
	if(A == B){
		if(A == C){
			sum = 10000 + (A*1000);
		}
		else if(A !=C){
			sum = 1000 + (A * 100);
		}
	}
	else if(B == C){
		sum = 1000 + (B * 100);
	}
	else if(C == A){
		if(C != B){
			sum = 1000 + (C * 100);
		}
	}
	else {
		if(A > B & A > C){
			sum = A * 100;
		}
		else if(B > A & B > C){
			sum = B * 100;
		}
		else{
			sum = C * 100;
		}
	}
	
	printf("%d", sum);	

	return 0;
}
