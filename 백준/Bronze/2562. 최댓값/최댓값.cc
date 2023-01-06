#include <stdio.h>

int main(void){
	int n[9] = { 0 ,};
	int max = 0;
	int count = 0;
	
	for(int i = 0; i < 9; i++){
		scanf("%d",&n[i]);
		if(n[i] > max){
			max = n[i];
			count = i + 1;
		}
		
	}

	printf("%d\n%d", max, count);	
	return 0;
} 