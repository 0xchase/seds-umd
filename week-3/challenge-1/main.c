#include <stdio.h>

int main() {
	int j = 22;
	for (int i = 35; i < 56; i++) {
		for (int k = 20; k < i; k += 3) {
			printf("%x", (j+i+k)%16);
		}
	}
	printf("\n");

}
