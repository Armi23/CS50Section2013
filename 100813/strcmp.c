#include <stdio.h>
#include <cs50.h>

char* my_strchr(char* str, char c)
{
    // iterate through string
    for (char* ptr = str; *ptr != '\0'; ptr++)
    {
        // if c is found
        if (*ptr == c)
        {
            // return substring
            return ptr;
        }
    }
    // if c wasn't found return NULL
    return NULL;
}

int main(void)
{
    printf("String: ");
    char* str = GetString();
    printf("Character: ");
    char c = GetChar();
    printf("Looking for substring...\n");
    char* result = my_strchr(str, c);
    if (result == NULL)
    {
        printf("Couldn't find %c.\n", c);
    }
    else
    {
        printf("Substring: %s \n", result);
    }
}
