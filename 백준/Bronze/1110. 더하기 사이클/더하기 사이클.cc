#include <stdio.h>

int main(void){
	int n = 0;
	int a = 0, b = 0;
	
   	scanf("%d",&n);
   	
    a = 10 * (n % 10) + (n % 10 + n / 10) % 10;
    b++;
    
	while(a != n){
  		a = 10 * (a % 10) + (a % 10 + a / 10) % 10;  
   		b++;
  	}
	printf("%d",b);
	
	return 0;
} 