#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("yell");
        return -1;
    }
    
    int result = factorial(atoi(argv[1]));

    printf("%d\n",);
}

int factorial(int n)
{
    // base case
    if (n > 1)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}
