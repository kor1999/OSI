#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pid = fork();
    int n = 15;
    
    if (pid < 0)
    {
        return -1;
    }
    else if (pid > 0)
    {
        printf("Hello from parent [%d - %d]\n", pid, n);
    }
    else
    {
        printf("Hello from child [%d - %d]\n", pid, n);
    }
    return 0;
}
