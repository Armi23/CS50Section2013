#include <stdio.h>
#include <cs50.h>

bool rec_search(int values[], int n, int value);

int main(int argc, string argv[])
{
    // check usage
    if (argc < 2)
    {
        printf("Houston, we have a problem. Please give me a list\n");
        return -1;    
    }
    
    // get the inputed list, first allocate space and then add numbers in 
    int* values = malloc(sizeof(int)*argc);
    for(int i = 1; i < argc; i++)
    {
        values[i-1] = atoi(argv[i]);
    }
    
    // get number to look for from user
    printf("What do you want me to find?\n");
    int value = GetInt();

    // start looking
    bool result = rec_search(values,argc,value);
    
    //remember to free memeory
    free(values);

    // Give feedback if we have it
    if(result)
    {
        printf("I got it!\n");
    }

    // Tell the user if we don't
    else
    {
        printf("I have no idea what you're talking about. Never seen a %d before in my life.\n",value);        
    }

    // this looks like a good place to stop....
    return 0;
}


// pass in values as array, n as size, value as item to search for
bool rec_search(int values[], int n, int value)
{
    int lower = 0;
    int upper = n - 1;
    int middle = (upper + lower)/2;
    
    if (values[middle] == value)
    {
        // found it! Why is it in the last place we look?
        return true;
    } 
    
    if(lower < upper)
    {
        if(values[middle] < value)
        {
            // ask the computer for more space to hold values
            int* new_values = malloc(sizeof(int)*(upper-middle));
            for (int j = middle + 1, i = 0; j <= upper; j++, i++)
            {
                new_values[i] = values[j];
            }
            
            // continue search   
            bool result = rec_search(new_values, upper-middle, value);
            
            // mustt.... freee.... valluueeeesss
            free(new_values);
            
            // finally return the result of our search
            return result;   
        }


        else
        {
            // ask the computer for more space to hold values
            int* new_values = malloc(sizeof(int)*(middle-lower));
            for (int j = lower, i = 0; j < middle; j++, i++)
            {
                new_values[i] = values[j];
            }
            
            // continue search   
            bool result = rec_search(new_values, middle-lower, value);
            
            // release the poor memory as we go up
            free(new_values);
            
            // finally return the result of our search
            return result;
        
        }
    }
    
    // return false when we have exhausted list   
    return false; 
}
