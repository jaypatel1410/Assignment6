#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,s=0;
    printf("Enter the integer\n");
    scanf("%d",&a);
    printf("The list of %d odd natural number\n",a);
    for(i=1;i<=a;i++)
    {
        s=s+(2*i-1);
        printf("%d ",2*i-1);
    }
    printf("\nThe Sum of %d odd natural number is %d",a,s);
    getch();
    return 0;
}
