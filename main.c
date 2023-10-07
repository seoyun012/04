#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Input the second : ");
	scanf("%i", &a);
	
	printf("The time is for %i second is %i : %i : %i\n", a, a/3600, a%3600/60, a%3600%60);
	
	return 0;
}
