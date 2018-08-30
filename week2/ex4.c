#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	
	swap(&a, &b);
	printf("%d %d",a,b);
	
	return 0;
}
void swap(int *pa,int *pb){
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
