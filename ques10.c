#include<stdio.h>
#include<conio.h>
int main()
{
    int a,x,b=0;
    printf("Enter the Number\n");
    scanf("%d",&a);
    while(a!=0)
    {
        x=a%10;
        b=b*10+x;
        a=a/10;
    }
    printf("The reversed number is %d",b);
    getch();
    return 0;
}