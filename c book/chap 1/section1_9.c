#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {

    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = getLine(line, MAXLINE)) > 0) { // while the length of the line is greater than 0
        if (len > max) { // if this new length of the line is greater than the longest line we've seen so far
            max = len; // set the new max to the length of the line
            copy(longest, line); 
        }
    }

    if (max > 0) {
        printf("%s", longest);
    }

    return 0;

}

int getline(char s[], int lim){
    
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i) { // while i is less than the max length of the line, and the character is not EOF or a newline
        s[i] = c; // set the current index of the line to the character
    }
    if (c == '\n') { // if the character is a newline, this means we have reached the end of the line
        s[i] = c; // set the current index of the line to the newline
        ++i; // increment i
    }
    s[i] = '\0'; // set the last index of the line to the null character
    return i; // return the length of the line
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]) {

    int i;

    i = 0;

    while ((to[i] = from[i]) != '\0') { // while the current index of the line is not the null character
        ++i; // increment i
    }
}