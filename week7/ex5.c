#include <stdio.h>

int main() {
    char **s = malloc(20*sizeof(char));
    char foo[] = "Hello World";
    
    *s = foo;
    printf("s is %s\n", *s);
    
    *s = &foo;
    printf("s[0] is %c\n", *s[0]);
    
    return(0);
} 