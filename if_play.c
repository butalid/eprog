#include<stdio.h>
int main(){
	int grade;
	
	printf("Enter grade:");
	scanf("%d", &grade);
	printf("Grade is: %d", grade);
	if(grade% 5==0){
		printf("Ed");
	}
	if(grade%3==0){
		printf("Pogi");
	}
	if(grade%5==0 && 3==0 ){
		printf("Ed Pogi");
	}
}
