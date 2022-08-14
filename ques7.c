#include<stdio.h>
#include<conio.h>
int main()
{
    int a,count=0;
    printf("Enter the integer\n");
    scanf("%d",&a);
    while(a)
    {
        a=a/10;
        count++;
    }
    printf("The Number of digits is %d",count);
    getch();
    return 0;
}

