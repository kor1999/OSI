#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <float.h>

int main()
{
  
int i=INT_MAX;  
float f=FLT_MAX;
 
double d=DBL_MAX;

printf("value of int value: %d\n",i);
  
printf("value of float value: %f\n",f);
  
printf("value of double value: %f\n",d);
  
printf("\n");
  
printf("size of int value: %lu\n",sizeof(i));
  
printf("size of float value: %lu\n",sizeof(f));
  
printf("size of double value: %lu\n",sizeof(d));
  
return 0;
}