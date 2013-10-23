#include <stdio.h>

int main(int argc, char* argv[])
{

    // check if enough input arguments were given
    if (argc < 2)
    {
        printf("Usage: cat file1 file2 ..\n");
        return 1;
    }

    // open output file.
    FILE* output = fopen("output.txt","w");
    
    if (output == NULL)
    {
        printf("Could not open output\n");
        return 1;
    }

    // open each file given on the command line, one by one
    for(int i = 1; i < argc; i++)
    {
        FILE* file = fopen(argv[i],"r");

        // check if they could be opened
        if (file == NULL)
        {
            printf("couldn't open %s\n",argv[i]);
            return 1;
        }
        
        // read in from file and put character you read into output. 
        for (int c = fgetc(file); c != EOF; c = fgetc(file))
        {
            //Also can use putc(c,output);
            fwrite(&c,sizeof(char),1,output);
        }
        
        fclose(file);
    }
    
    return 0;



}
