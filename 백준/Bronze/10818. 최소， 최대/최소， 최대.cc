#include <stdio.h>

int main(void){
	int N = 0;
		
	scanf("%d",&N);
	
	int a[N];

	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	
	int min = a[0], max = a[0];
	
	for(int i = 0; i < N; i++){
		if(min > a[i]){
			min = a[i];	
		}
		if(max < a[i]){
			max = a[i];	
		}
	}
	printf("%d %d", min, max);
	
	return 0;
} 