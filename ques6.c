#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,s=1;
    printf("Enter the integer\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    printf("The factorial of %d is %d",a,s);
    getch();
    return 0;
}
