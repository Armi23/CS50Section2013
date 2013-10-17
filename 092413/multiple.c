#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for input
    int multiple;
    do
    {
        printf("Give me a number: \n");
        multiple = GetInt();
    }
    while (multiple <= 0 || multiple >= 100);
    
    for(int i = multiple; i <= 100; i += multiple)
    {
        printf("%d ",i);
    }
    
    printf("\n");
}
