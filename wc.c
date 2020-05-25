#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <criterion/criterion.h>

/* wc header file*/
#include "tool.h"

/*Program main Entrance*/

int main(int argc, char const *argv[])
{
    /*
    -b / --bytes    : count  the bytes of file
    -m / --chars    : print the character counts
    -l / --lines    : print the newline counts
    -w / --words    : print the word counts
    -h / --help     : display this help and exit
    -v / --version  : output version information and exit
    */
    
    static const char* params[] = {"-b","--bytes","-m","--chars",
            "-l","--lines","-w","--words","-h","--help",
            "-v","--version"};
    

    /* find paramters  */
    if (argc == 0 ){
       
       printf("Please enter params");

    }
    
    /*compare params if the params  given is correct*/
    int is_param = 0;
    for (int i = 1; i < argc; i++)
    {
        // printf("Argument %d = %s\n", i+1, argv[i]);

        if (i<=argc)
        {
            break;
        }
        for (int j = 0; j < argc; j++)
        {
            if (params[i]==argv[i])
            {
                is_param = is_param+1;
            } 
        }

        if (is_param==0)
        {
            printf(" Please enter correct paramters");
        }
         
    }
    
    /* get file name*/
    char *file_name = argv[argc-1];

    // printf("file name is :%s\n",file_name);

    if( (access( file_name, 0 )) == -1 ){
         printf(" file doesn't exisit");
    }
   
    // printf("params : %s\n",argv[0]);
    // printf("params : %s\n",argv[1]);
    
    // char sw[] = *argv[1];
    // printf("%s\n",sw);
    switch (argv[1][1])
    {
    case 'b':
        file_bytes(file_name); 
        break;   
    case 'm':
        file_chars(file_name);
        break;
    case 'l':
        file_line(file_name);
        break;
    case 'w':
        file_words(file_name);
        break;
    case 'h':
        file_help(file_name);
        break;
    case 'v':
        file_version(file_name);
        break;
    }

    return 0;
}
