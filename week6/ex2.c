#include <stdio.h>
#include <unistd.h>


int main(){
    char* someText = "some text...LOL";
    char emptyText [255];
    int arr[2];
    pipe(arr); 
    
    int pid = fork();
    if (pid>0){
        write(arr[1], someText, 255);
        close(arr[1]);
    } 
    else {
        if (pid==0){
        read(arr[0], emptyText, 255);
        printf("Now not empty string: %s\n", emptyText);
        close(arr[0]);}
    }

    close(arr[0]);
    return 0;
}