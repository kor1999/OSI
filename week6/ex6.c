#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(){
	int pID1 = fork();
	int pID2 = fork();
	int arr[2];
	pipe(arr);
	
	
	return 0;
}