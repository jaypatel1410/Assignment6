#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,s=0;
    printf("Enter the integer\n");
    scanf("%d",&a);
    printf("The list of cubes of %d natural number\n",a);
    for(i=1;i<=a;i++)
    {
        s=s+(i*i*i);
        printf("%d ",i*i*i);
    }
    printf("\nThe Sum of cubes of %d natural number is %d",a,s);
    getch();
    return 0;
}
