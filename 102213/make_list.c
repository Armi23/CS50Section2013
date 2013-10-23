#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // check usage
    if (argc < 2)
    {
        printf("I'm make_list not make_nothing\n");
        return -1;
    }
    
    // intialize int list
    int* list = malloc(sizeof(int)*(argc-1));
    
    // add to list
    for(int i = 1; i < argc; i++)
    {
        list[i-1] = atoi(argv[i]);
    }
    
    printf("[");
    
    for(int j = 0; j < argc - 1; j++)
    {
        printf("%d,", list[j]);
    }
    
    printf("%d]\n",list[argc-1]);
    
}
