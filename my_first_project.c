#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

	puts("Hello World from QNX Neutrino RTOS!!!\n"); /* prints Hello World from QNX Neutrino RTOS!!! */
	puts("Daisy Rani Gupta (gupt0054@algonquinlive.com)\n");/*Prints author name and userId*/
	printf("Process ID at run-time: %d", getpid());
	puts("\n");
	printf("Parent Process ID at run-time: %d\n", getppid());

	puts("Enter 'q' to quit");
	getchar();

	return EXIT_SUCCESS;
}
