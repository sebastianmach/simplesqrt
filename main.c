/*
 *    Created by Sebastian Mach on 26. March 2014
 *
 *    Simple Sqareroot. Should show how to calculate
 *    a simple sqrt of a number.
 *
 *    Use the program like this:
 *    $ simplesqrt 16
 *    Sqrt of 16 is 4
 */

#import "stdio.h"
#import "string.h"
#import "stdlib.h"

int mysqrt(int x);
int mult(int x, int y);

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Use the program like:\n%s 123\n", argv[0]);
		return -1;
	}
	
	int value = atoi(argv[1]);
	
	printf("Sqrt of %i is %i\n", value, mysqrt(value));
	
	return 0;
}


int mysqrt(int x)
{
	int result = 0;
	
	while (mult(result, result) <= x)
	{
		result ++;
	}
	
	return result - 1;
}


int mult(int x, int y)
{
	int result = 0;
	
	int acount = 0;
	int bcount = 0;
	
	while(acount++ < x)
	{
		while(bcount++ < y)
		{
			result ++;
		}
		bcount = 0;
	}

	return result;
}
