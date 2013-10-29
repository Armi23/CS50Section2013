#include <cs50.h>
#include <strings.h>
#include <stdio.h>

#define THE_ANSWER 42

// define our node struct
typedef struct node
{
    int n;
    struct node* next;
}
node;

// recursive freeing function
void be_free(node *);

// search function
bool search(int, node*);

int main (int argc, char* argv[])
{
    // put first value in first and point cursor at it
    node* first = malloc(sizeof(node));
    
    // what am I doing wrong here???
    
    
    first->n = atoi(argv[1]);
    
    // point to our root node
    node* cursor;
    cursor = first;
    
    // loop over inputed values to make linked list
    for (int i = 2; i < argc ; i++)
    {
        // first make some space for the next node
        cursor->next = malloc(sizeof(node));
        
        // Same mistake as above
        
        
        // move to the next node
        cursor = cursor->next;
        
        // place in the value
        cursor->n = atoi(argv[i]);
        
        // what happens if I remove this line? check valgrind!
        cursor->next = NULL;
    
    }
    
    // pass in the root to begin the search, it is the start of the list
    if (search(THE_ANSWER,first))
    {
        printf("We have the answer, but what's the question?\n");
    }
        
    // when we're done, free everything
    be_free(first);   
    
    return 0;
}

// recursively move to the end and free all of the nodes from there. 
void be_free(node* cursor)
{
    if (cursor->next != NULL)
    {
        be_free(cursor->next);
    }

    free(cursor);
}

// look at each node until we hit NULL
bool search(int n, node* list)
{
    node* ptr = list;
    while (ptr != NULL)
    {
        if (ptr->n == n)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}
