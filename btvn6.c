#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<stdio.h>
int main(){
    int N,i,k;
    char ch;
    printf("Nhap bang cuu chuong N = ");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
    k=N*i;
    printf("%d x %d = %d \n",N,i,k);}
        printf("Tiep tuc nhan'N'\n");
        printf("Dung lai nhan 'Y'\n");
        fflush(stdin);
        ch = getchar();
    while(ch=='N'){
            printf("Nhap bang cuu chuong N = ");
            scanf("%d",&N);
            for(i=1;i<=10;i++){
             k=N*i;
             printf("%d x %d = %d \n",N,i,k);}
             printf("Tiep tuc nhan'N'\n");
        printf("Dung lai nhan 'Y'\n");
        fflush(stdin);
        ch = getchar();
             } if(ch=='Y'){
                 printf("Ket thuc chuong tri");}
	return 0;
}
