#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a=0,b=0,s;
    printf("Nhap so ");
    scanf("%d",&s);

    for(a=0;s>=10;a+=b){
        b =    s%10;
        s=(s-b)/10;
    }
    printf("%d",a+s);

    return 0;
}
