#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int minA(int x, int y)
{
	if(x<y)
		return x;
		else
		return y;
	
}

void reallocA(int *ptr, int size)
{
    if (ptr == NULL)
        ptr = malloc(size);
    
    if (size == 0)
        free(ptr);
    
    int *newPtr = malloc(size);
    int tmp=(int)sizeof(ptr) / (int)sizeof(int);
    int tmpSize=size / (int)sizeof(int);
    for (int i = 0; i < minA(tmp, tmpSize); i++)
        newPtr[i] = ptr[i];
    
    ptr = newPtr;
}

int main()
{
	int n=5;
    int* a1 = malloc(n*sizeof(int));
    
    for(int i = 0; i < n; i++)
    {
		a1[i] = 100;
		printf("%d ", a1[i]);
	}
    printf("\n");
    int n2=10;
	reallocA(a1, n2* sizeof(int));
	
    for(int i = 0; i < n2; i++)
		printf("%d ", a1[i]);
	printf("\n");
}