#include <stdio.h>
int main()
{
    int l, k, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
	for(l=rows; l>=1; --l){
	for(k=1; k<=l; ++k){
		printf("* ");
        }
        printf("\n");
    }
    system("pause");
}
