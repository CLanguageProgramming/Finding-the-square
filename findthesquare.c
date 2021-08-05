//2.Accept a number and check if it is a perfect square.
#include <stdio.h>

int main()
{
    int num;
    int number=1;
    printf("Enter a number >>");
    scanf("%d", &num);
    while (num/number != number)
    {
        number++;
    }
    printf("The square of %d is %d", num, number);
}
