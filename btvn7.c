#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int a1=0,a2=1,a,b,c;

    printf("nhap so nguyen duong : ");
    scanf("%d", &c);
    printf("day fibonaci cua %d la :\n", c);
    printf("\n %d %d ", a1,a2);

    while(a<c)
    {
        a=a1+a2;
        a1=a2;
        a2=a;
        if(a<c)
        {
            printf("%d ",a);
        }

    }

}
