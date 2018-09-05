#include <stdio.h>
int n;
int main(){
	int a[100];

	scanf("%d",&n);
	for(int i;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(&a);
	for(int i;i<n;i++){
		printf("%d ",a[i]);
	}
 return 0;
}
void sort(int *a){
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[j] < a[j - 1]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}