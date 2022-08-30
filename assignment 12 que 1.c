#include<stdio.h>

void natural(int);

int main()
{
    int number;

    printf("Enter the number");
    scanf("%d", &number);
    natural(number);

    return 0;
}

void natural(num)
{
    if(num)
        natural(num-1);
    else
        return ;

    printf("\n%d",num);
}
