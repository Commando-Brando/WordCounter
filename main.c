#include <stdio.h>

int main(int argc, char *argv[]) {

    // argc prints: 4
    // argv prints: C:\Users\Branm\CLionProjects\untitled\cmake-build-debug\untitled.exe    words3.txt      words15.txt     words49.txt

    // determine number of files
    int fileCount = argc - 1;
    // use a for loop to create multiple processes

    for(int i = 1; i < argc; i++) {
        //printf("%s\t", argv[i]);

    }

    printf("Hello World");
    return 0;
}