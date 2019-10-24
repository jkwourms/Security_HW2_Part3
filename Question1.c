#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]) {
	int x = 3;
	int y = 5
	int z = 0;

	int product = x * y;
	
	//isolate signed bit (x), if negative x + 1
	if (x < 0) {
		x = x + 1;
	}
	//divide x / 2
	x = x / 2;

	//subtract product by x/2
	printf("%d\n", product - x);
}