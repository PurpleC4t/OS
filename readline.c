#include "readline.h"
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int read_line(char* str) {
    int i = 0;
    int sum = 0;
    char realstr[100];
    char c;
    printf("Enter string from readline: ");
    scanf("\n");
    do {
        c = getchar();
        realstr[i] = c;
        i++;
        if (c == '\n') {
            substring(realstr, 0, i, str);
            printf("%s", str);
            return strlen(str) - 1;
        }
        if (c == EOF) {
            substring(realstr, str, 0, i);
            printf("\n%s\n", str);
            return -1;
        }
    } while (c != EOF && c != '\n');
}

void substring(char* source, int from, int n, char* target) {
    int length, i;
    //get string length 
    for (length = 0; source[length] != '\0'; length++);

    if (from > length) {
        printf("Starting index is invalid.\n");
        return;
    }

    if ((from + n) > length) {
        //get substring till end
        n = (length - from);
    }

    //get substring in target
    for (i = 0; i < n; i++) {
        target[i] = source[from + i];
    }
    target[i] = '\0'; //assign null at last

    return;
}

char* substring(char* destination, const char* source, int beg, int n)
{
    strncpy(destination, (source + beg), n);
    return destination;
}
