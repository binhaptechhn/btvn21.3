#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

#include <stdio.h>

#include <stdio.h>
int main(){
    char kt;

  while(1){
    printf("\nNhap bat ki: \n");
    fflush(stdin);
    scanf("%c",&kt);
      	if(kt==' '){
          	break;}

    if(kt>='a'&&kt<='z'||kt>='A'&&kt<='z')
     	{printf("\nDay la chu cai\n");}
    else if(kt>=48&&kt<=57)
    	{printf("\nDay la chu so\n");}
    else
    	printf("\nDay la ki tu dac biet\n");

    }
  	printf("Chuong trinh ket thuc");
  }
