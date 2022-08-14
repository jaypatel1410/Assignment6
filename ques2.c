#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,s=0;
    printf("Enter the integer\n");
    scanf("%d",&a);
    printf("The list of %d even natural number\n",a);
    for(i=1;i<=a;i++)
    {
        s=s+2*i;
        printf("%d ",2*i);
    }
    printf("\nThe Sum of %d even natural number is %d",a,s);
    getch();
    return 0;
}
