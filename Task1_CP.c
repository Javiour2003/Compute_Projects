#include<stdio.h>
void main()
{
 int a=0,b=0,i=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%b != 0)
    {
        while(a % b != 0)
        {
            a++;
            i++;
        }
        printf("%d",i);
    }
    else
    {
        printf("0");
    }
}