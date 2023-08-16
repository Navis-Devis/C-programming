// C Program to demonstrate the do...while loop behaviour
// when the condition is false from the start
#include <stdbool.h>
#include <stdio.h>

int main()
{

	// declaring a false variable
	bool condition = false;

	do {
		printf("This is loop body.");
	} while (condition); // false condition

	return 0;
}
