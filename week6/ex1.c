#include <stdio.h>
#include <unistd.h>

int main(){
    char* someText = "some text...LOL";
    char emptyText [255];
	
    int arr[2];
    pipe(arr);

    write(arr[1], someText, 255);
    read(arr[0], emptyText, 255);

    printf("Now not empty string: %s\n", emptyText);

}