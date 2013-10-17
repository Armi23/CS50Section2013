#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("%c\n", ('z' - 'a' + 1) % 26 + 'a');
}
