#include <stdio.h>

int main(void){
	int A, B, C, sum;
	
	scanf("%d %d %d",&A, &B, &C);
	
	if(A == B & A == C){
		sum = 10000 + (A*1000);
	}
	else if(A == B & A !=C){
		sum = 1000 + (A*100);
	}
	else if(A == C & A != B){
		sum = 1000 + (A*100);
	}
	else if(B == C & B != A){
		sum = 1000 + (B*100);
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
