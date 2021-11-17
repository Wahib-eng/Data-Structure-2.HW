

#include <stdio.h>

bool isPrime(int number,int i=2)
{

	if (number % i == 0)
		return false;
	if (i* i > number)
		return true;
		
	return isPrime(number, i+1);
}

int main (){
    int number ;
    printf("Enter a number ");
    scanf("%d",&number);
	if (isPrime(number))
		printf("%d is a prime number " , number );
	else
		printf("%d  is not a prime number ",number );

	return 0;
}
