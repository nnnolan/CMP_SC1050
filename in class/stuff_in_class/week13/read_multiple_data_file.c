#include<stdio.h>

int main() {

    FILE* fPtr; // creates a pointer to a file, FILE is a type defined in stdio.h and htus a keyword, in the same way that int is a keyword

    fPtr = fopen("stuff.xsl", "r"); // opens the file for reading, note that the extension is not important

    if (fPtr == NULL) { // if the file does not exist, exit the program
        fprintf(stderr, "File does not exist\n");
        return 5000;
    }

    char name[25] = {0};
    int age = 0;

    do {
        fscanf(fPtr, "%s%d", name, &age); // reads the first line of the file, note that the & is needed for age, but not for name because name is an array
        printf("Name: %s\n", name);
        printf("Age: %d\n", age); 
    }
    while(!feof(fPtr));// while not at the end of the file
    // this will print the last line twice, because it will read the last line, then check if it is at the end of the file, and then print it again


    fclose(fPtr); // closes the file

    return 0;
}