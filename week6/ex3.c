#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler(int n){
   printf("Caught signal %d, come out\n", n);
}

int main(){
    signal(SIGINT, handler);
    while(1){
        printf("Sleeping in progress\n");
        sleep(5);
    }
return 0;
}

