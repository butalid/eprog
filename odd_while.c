#include <stdio.h>

int main(){
	int y=0;
	
	while (y<100){
		y++;
		if (y%2==1){
			printf("%d\n",y);
		}
	}
}
