#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {

    // argc prints: 4
    // argv prints: C:\Users\Branm\CLionProjects\untitled\cmake-build-debug\untitled.exe    words3.txt      words15.txt     words49.txt

    // determine number of files
    int fileCount = argc - 1;
    int forkPID = 0;

    for(int i = 1; i < argc; i++) {
    // make a fork process using file at index i
    forkPID = fork();
    // open the file and count the number of words based on any combination of tabs/spaces

    // print out the processes

    }

    // wait for all the processes to finish and then make final print statement

    printf("Hello World");
    return 0;
}