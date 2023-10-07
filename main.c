#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Input the year : ");
	scanf("%i", &a);
	
	if ((a%4==0 && a%100!=0) || (a%400==0)){ // 4로 나누어 떨어지면서 100으로 나누어 떨어지지 않거나 400으로 나누어 떨어지면 윤년 
		printf("is the year %i the leap year? : 1", a); // 윤년이면 1을 출력  
	}
	else {
		printf("is the year %i the leap year? : 0", a); // 윤년이 아니면 0을 출력  
	}
	
	return 0;
}
