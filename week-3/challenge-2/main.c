#include <stdio.h>

int main() {
	int x = 0;
	int y = 0;
	int z = 0;

	puts("Running the loop that changes the value of x");

	for (int i = 0; i < 20; i++) {
		for (int j = i; j < i+10; j += 3) {
			x = x + 1;
			y = y + x % 30;
			z = z + x + y % 20;
		}
	}
	puts("The solution is the values of x, y, and z at this point in the code");
}
