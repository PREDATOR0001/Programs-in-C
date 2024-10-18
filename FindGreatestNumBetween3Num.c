#include <stdio.h>
#include <conio.h>

void main() {
    int a,b,c,max;

    printf("Enter three number to find greatest number between them : ");
    scanf("%d%d%d",&a,&b,&c);

    max = (a>b && a>c)? a:(b>a && b>c) ? b:c ;

    printf("Greatest number is %d",max);
}
