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
    {
        printf("\n%d", 2*num-1);
        natural(num-1);
    }
    else
        return;


}

