#include<stdio.h>
#include <pthread.h>

void *myThreadFun(void* i)
{
    printf("Some text from thread: %d\n", (int) i);

    return NULL;
}

int main() {
    int n = 10;
    pthread_t thread;
    for (int i = 0; i < n; i++) {
        pthread_create(&thread, NULL, myThreadFun, (void *) i);
        //pthread_join(thread, NULL);
    }
    
    pthread_join(thread, NULL);
    return 0;
}