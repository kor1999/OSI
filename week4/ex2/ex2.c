#include <stdio.h>
#include <stdlib.h>

int j;
int main(void)
{
    for (j = 0; j < 3; j++)
    {
        fork();
        sleep(5);
    }
    return 0;
}
