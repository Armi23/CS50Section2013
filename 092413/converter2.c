#include <cs50.h>
#include <stdio.h>

#define BASE 8
int main(void)
{
    // Get int from user
    int n;
    do
    {
        printf("Give me a number greater than 0: \n");
        n = GetInt();
    }
    while (n < 0);

    
    // create array to store binary digits
    int binary[31];

    // keep track of position in binary array
    int digit;

    // calculate binary digits by repeatedly dividing by 2
    for (digit = 0; n != 0; digit++, n /= BASE)
        // store binary digits in array
        binary[digit] = n % BASE;

    // print out binary array
    for (digit = digit - 1; digit >=0; digit--)
        printf("%i", binary[digit]);

    printf("\n");
    return 0;
    

}
