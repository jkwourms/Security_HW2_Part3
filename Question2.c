#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int array[] = {12, 15, 221, 3, 432, 54, 16, 67};
	int arrayLength = sizeof(array)/sizeof(array[0]);
	int index = 0;
	int maxValue = 0;
	int tempValue = 0;

	while (index <= arrayLength) {
		tempValue = array[index];
		if (tempValue <= maxValue) {
			index++;
		}
		else {
			maxValue = tempValue;
			index++;
		}
	}

	printf("%d\n", maxValue);

	return 0;
}