#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    rev(num);
}
void rev(number)
{
    int sum=0,a;
    if(number==0)
        return;
        a=number%10;
        printf("%d",a);
        rev(number/10);

}
