#include <stdio.h>
int main(){
	int i, cc[5], num_ones=0;
	for(i=0; i<5; i++){
		printf("Num %d: ", i+1);
		scanf("%d", & cc[i]);
	}
	for(i=0; i<5; i++){
		if(cc[i]==1)
		num_ones++;
	}
	printf("Ones:%d\n",num_ones);
	printf("Zeroes:%d", 5-num_ones);
	

}
