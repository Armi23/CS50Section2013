#include <stdio.h>
#include <cs50.h>

unsigned int factorial (unsigned int n);

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("What is this? What are you doing? WHYYYYYY?\n");
        return -1;
    }

    // turn input into int
    unsigned int n = atoi(argv[1]);
    
    // do calculation
    unsigned int result = factorial(n);

    // print result
    printf("%d\n",result);

    // that's a wrap (rap? No definitely not a rap)
    return 0;
}

// recursively find factorial 
unsigned int factorial (unsigned int n)
{
    // base case so our recursion ends
    if (n <= 1)
    {
        return 1; 
    }
    
    // definition of factorial
    else
    {
        return n * factorial(n - 1);
    }
}
