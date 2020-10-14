#include <stdio.h>
#include <stdlib.h>
#include "readline.h"
#include "findsubstr.h"
#pragma warning(disable:4996)

int main(int argc, char* argv[]) {
	char* inp;
	int stop;
	inp = (char*)malloc(100 * sizeof(char));
	char inp1[100];
	printf("Enter the input string: ");
	scanf("%s", inp1);
	fflush(stdin);
	inp = inp1;
	printf("The input string: %s", inp);
	fflush(stdin);
	printf("\n");
	char* str;
	str = (char*)malloc(100 * sizeof(char));
	do {
		stop = read_line(str);
		int a = find_sub_string(str, inp);
		fflush(stdin);
		if (a != -1) {
			printf("%s", str);
		}

	} while (stop != -1);
	return 0;
}
