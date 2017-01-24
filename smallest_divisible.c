#include<stdio.h>
int main(){
	int y;
	int num=0;
	while(1){
		y++;
		if( y%6==0 && y%8==0 && y%9==0 && y%11==0 && y%13==0 && y%14==0 && y%15==0 && y%17==0 && y%18==0 && y%19==0 && y%20==0){
			printf("%d",y);
			break;
				}
		}
			
}

