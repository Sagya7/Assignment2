#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


// Function to return
// gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}


int main()
{
	srand(time(NULL));
	int attempts = 100000000;
	int count = 0;
	printf("please wait... 1 Billion random numbers GCD are calculating to get the probability equal to (6/((pi)^2))");
	while (attempts > 0)
	{
		int a = rand();
		int b = rand();

		int retgcd = 0;
		retgcd = gcd(a, b);
		if (retgcd == 1)
		{
			count++;
		}
		attempts--;
	}

	float prob;
	prob = count / 100000000.0;

	float pi;
	pi = sqrt(6 / prob);
	
	printf("\npi value is %f", pi);

	getchar();

	return 0;


}