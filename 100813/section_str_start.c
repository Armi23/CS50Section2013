#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ask for string
    printf("Give me a string, please?\n");
    char* input = GetString();
    
    // ask for character to find
    printf("Character to find?\n");
    char c = GetChar();
    
    // look though the string, find it
    while (*input != '\0' || *input == c)
    {
        input = input + 1;
    }
    
    
    // print out substring
    printf("%s",input);


    return 0;
}
