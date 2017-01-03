#include<stdio.h>
int main(){
	int counter;
	printf("odd numbers between 100 to 1\n");
	for(counter=100;counter>0; counter--){
		if(counter%2==1){
			printf("%d\n",counter);
	
		}
	
	}
	return 0;
}
