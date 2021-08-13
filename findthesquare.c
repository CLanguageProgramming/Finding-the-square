//2.Accept a number and check if it is a perfect square.
#include <stdio.h>

int main()
{
    int num;
    int number=1;
    int check;
    printf("Enter a number >>");
    scanf("%d", &num);
    check = num/2;
    while (num/number != number)
    {
        number++;
        if(number > check)
        {
            break;
        }
    }
    if(number*number == num)
    {
        printf("The square of %d is %d", num, number);
    }
    else
    {
        printf("%d is not a perfect square\n", num);
    }
}
