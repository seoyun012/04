#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Input the year : ");
	scanf("%i", &a);
	
	if ((a%4==0 && a%100!=0) || (a%400==0)){ // 4�� ������ �������鼭 100���� ������ �������� �ʰų� 400���� ������ �������� ���� 
		printf("is the year %i the leap year? : 1", a); // �����̸� 1�� ���  
	}
	else {
		printf("is the year %i the leap year? : 0", a); // ������ �ƴϸ� 0�� ���  
	}
	
	return 0;
}
