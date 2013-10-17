#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // reject improper input
    if (argc != 3)
    {
        printf("I need a base and input!");
    }
           
    // recover base
    int base = atoi(argv[1]);
    int n = atoi(argv[2]);
    
    // create array to store binary digits
    int binary[31];

    // keep track of position in binary array
    int digit;

    // calculate binary digits by repeatedly dividing by 2
    for (digit = 0; n != 0; digit++, n /= base)
        // store binary digits in array
        binary[digit] = n % base;

    // print out binary array
    for (digit = digit - 1; digit >=0; digit--)
        printf("%i", binary[digit]);

    printf("\n");
    return 0;
    

}
