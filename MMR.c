#include<stdio.h>
#include<conio.h>

int main(){
	int num1,num2;
	int difference;
	
	printf("Enter first player 1:");
	scanf("%d",& num1);
	printf("Enter second player 2:");
	scanf("%d", &num2);
	
	difference=num1-num2;
	
	printf("\ndifference  = %d", difference);
	
	
	getch();
    return 0;
}
