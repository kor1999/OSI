#include <stdio.h>

int main(void) {
	char arr[100500];
	scanf("%s", &arr);
	
	int j=strlen(arr)-1;
	for(int i=0;i<strlen(arr)/2;i++){
		char tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp; 
		j--;
	}
	printf("%s",arr);
	return 0;
}
