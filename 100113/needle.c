#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define SIZE 10

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Need to give us one number to search for");
        return 1;
    }

    //turn input into integer
    int number = atoi(argv[1]);
    
    //initialize sorted number array
    int integers[SIZE] = {0,1,2,3,4,5,6,7,8,9};
    
    //find midway point
    int midway = SIZE/2;
    
    // start our search
    int max = SIZE - 1;
    int min = 0;
    
    bool found = 0;
    bool exhausted = 0;
    
    do
    {
        // equal  
        if (integers[midway] == number)
        {
            printf("%d",midway);
            found = 1;
        }
        // greater
        else if (integers[midway] > number)
        {
            max = midway - 1;
            midway = (max + min) / 2;
        }
        
        // less
        else 
        {
            min = midway + 1;
            midway = (max + min) / 2;
        }
        
        if (min > max)
        {
            exhausted = 1;   
        }
    
    }
    while(!found && !exhausted);
    
    return 0;
}

