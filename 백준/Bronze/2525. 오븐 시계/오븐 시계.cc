#include <stdio.h>

int main(void){
	int H, M, C;
	
	scanf("%d %d %d",&H, &M, &C);
	
	M += C;
	
	if(M >= 60){
		H += M / 60;
		M %= 60;
	}
	if(H >= 24){
		H %= 24;
	}

	printf("%d %d", H, M);	

	return 0;
}

