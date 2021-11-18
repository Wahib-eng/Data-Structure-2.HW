#include<stdio.h>

void factors_of_numbers(int number, int i)
{
    if(number < 1)
        return;
    else if(number % i == 0)
    {
      printf("%d\n", i);
      factors_of_numbers(number / i, i);
    }
    else
    {
      factors_of_numbers(number, i+1);
    }
}
int main()
{
    int number;

    printf("Enter positive number : ");
    scanf("%d", &number);

    printf("The factors of %d using recursion are : \n", number);
    factors_of_numbers(number, 2);

    return 0;
}

