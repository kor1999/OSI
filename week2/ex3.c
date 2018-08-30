#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int z=0;z<a-i;z++)
			printf(" ");
			
		for(int j=0;j<2*i-1;j++){
			printf("*");
		}
		if(i!=a)
		printf("\n");
		
	}
	
	return 0;
}
