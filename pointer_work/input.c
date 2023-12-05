#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* fPtr;
    
    // so we know that w overwrites the file
    // so could we just use a to append to the file, and rewind to the beginning of the file?
    fPtr = fopen("input.txt", "a");

    if (fPtr == NULL) {
        fprintf(stderr, "Unable to find file.\n");
        exit(500);
    }

    rewind(fPtr);

    fprintf(fPtr, "Hello World.\n");
    // it seems that the file pointer is at the end of the file, why is that?
    



    return 0;
}