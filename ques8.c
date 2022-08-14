#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("Enter the integer to check the number is prime or not\n");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        break;
    }
    if(i==a)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);
    }
    getch();
    return 0;
}