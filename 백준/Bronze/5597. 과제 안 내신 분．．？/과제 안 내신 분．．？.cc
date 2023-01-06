#include <stdio.h>

int main(void){
	int n[31] = {0, };
	int a = 0;
	
	for(int i = 1; i <= 28; i++){
		scanf("%d", &a);
		n[a] = a;
	}
	for(int j = 1; j <= 30; j++){
		if(n[j] == 0){
			printf("%d\n", j);
		}
	}
	return 0;
} 