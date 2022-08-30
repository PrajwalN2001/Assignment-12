#include<stdio.h>
void binary(int);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    binary(num);
}
void binary(number)
{
    int a;
    if(number==0)
        return;
        a=number%8;
        binary(number/8);
        printf("%d",a);



}


