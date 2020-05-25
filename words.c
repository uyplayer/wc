/*the word counts*/
#include<stdio.h>

void file_words(char file_name[]){

    FILE *file;
    int count = 1;
    char c;

    file = fopen(file_name,"r");
    if (file==NULL)
    {
        printf("File not found");
    }
    
    while ((c = fgetc(file)) != EOF)
    {
        if(c==' '){
            count = count+1;
        }
    }
    
    fclose (file) ;
    printf("%d  Words in the file \n",count);

}