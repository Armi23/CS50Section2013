#include <cs50.h>
#include <strings.h>
#include <stdio.h>

#define ALPHABET 2
#define THE_ANSWER 101010

// define our node struct
typedef struct node
{
    // tell us if it's a number
    bool is_number;
    
    // binary alphabet
    struct node* children[ALPHABET];
}
node;

// recursive freeing function
void be_free(node *);

// search function
bool search(int, node*);

int main (int argc, char* argv[])
{

    // TODO Modify how we build the trie. 

    
    // pass in the root to begin the search, it is the start of the list
    if (search(THE_ANSWER,first))
    {
        printf("We have the answer, but what's the question?\n");
    }
        
    // when we're done, free everything
    be_free(first);   
    
    return 0;
}

// TODO Modify be_free 
void be_free(node* cursor)
{
    if (cursor->next != NULL)
    {
        be_free(cursor->next);
    }

    free(cursor);
}

