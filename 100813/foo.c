#include <stdio.h>
#include <cs50.h>

void foo(char* str);

int main(void)
{
    // Initialize string to print
    char* str = "Hey, hey you! \n";

    // call foo and let's jump down the stack hole
    foo(str);

    // always polite to return (even though we won't make it here)
    return 0; 
}

void foo(char* str)
{
    // print str to show we got here
    printf("%s",str);
    
    // continue jumping
    foo(str);
}
