#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - print if the last digit is zero, greater than five and less than six
 * Description - using the main function
 * this program prints  the last digit is zero, greater than five and less than six 
 * Return - 0 if success
 */
int main(void)
{
int n;
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if(l > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n,l);
}
else if(l  == 0)
{
printf("last digit of %d is %d and is 0\n", n,l);
}
else if(l < 6)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n,l);
}
return (0);
}
