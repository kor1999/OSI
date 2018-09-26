#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(){
	int pID= fork();
	if(pID==0){
		while(1){
		printf("I’m alive");
		sleep(1);
		}
	} else{
		sleep(10);
		kill(pID,SIGTERM);
	}
	
	
	
	return 0;
}