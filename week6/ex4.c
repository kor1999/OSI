#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler_sigint(int n){
	if(n==SIGINT)
         printf("Caught SIGINT %d\n", n);
}

void handler_sigkill(int n){
	if(n==SIGKILL)
         printf("Caught SIGKILL %d\n", n);
}

void handler_sigstop(int n){
	if(n==SIGSTOP)
         printf("Caught SIGSTOP %d\n", n);
}

void handler_sigusr1(int n){
	if(n==SIGUSR1)
         printf("Caught SIGUSR1 %d\n", n);
}

int main(){
    signal(SIGINT, handler_sigint);
    signal(SIGKILL, handler_sigkill);
    signal(SIGSTOP, handler_sigstop);
    signal(SIGUSR1, handler_sigusr1);
    
    while(1){
        printf("Sleeping in progress\n");
        sleep(5);
    }
return 0;
}