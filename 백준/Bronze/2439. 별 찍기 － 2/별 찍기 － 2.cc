#include <stdio.h>
int main() {

	int star;

	scanf("%d", &star);

	for(int i = 1; i <= star; i++){
		for(int j = star; j > i; j--){
			printf(" ");
		}
		for(int k = i; k > 0; k--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

