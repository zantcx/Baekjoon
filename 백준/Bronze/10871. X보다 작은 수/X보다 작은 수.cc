#include <stdio.h>

int main(void){
	int N, X = 0;
		
	scanf("%d",&N);
	scanf("%d",&X);
	
	int a[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < N; i++){
		if(X > a[i]){
			printf("%d ", a[i]);
		}	
	}
	
	return 0;
} 