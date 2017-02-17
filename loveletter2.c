#include <stdio.h>
#include <stdio.h>
#include <string.h>
main(){
  char ch;
  FIILE *fp;
  fp=fopen("input.txt","r");
  while(!feof(fp)){
    ch=getc(fp);
    printf("%d",ch);
  }
}
