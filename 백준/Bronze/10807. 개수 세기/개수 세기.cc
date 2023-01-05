#include <stdio.h>

int main(void){
	int N, v, b = 0;
		
	scanf("%d",&N);
	
	int a[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &v);
	
	for(int i = 0; i < N; i++){
		if(v == a[i]){
			b ++;
		}
	}
	printf("%d", b); 
	
	return 0;
} 