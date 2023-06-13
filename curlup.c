#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char input[1000];
	int length, upper = 0;

	fgets(input, 1000, stdin);
	length = strlen(input);
	
	for (int i=0; i<length; i++) {
		if (upper == 0 && isalpha( input[i] ) ) {
			input[i] -= 32;
			upper = 1;
		} else {
			upper = 0;
		}
	}
	printf("\n%s", input);
	sleep(10);
}
