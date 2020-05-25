/* count number of line in the file */
#include<stdio.h>

void file_line(char file_name[]){


   FILE *fp;
   char ch;
   int lines = 0;

   fp=fopen(file_name,"r");
   if(fp==NULL) {
      printf("File Could not find");
      return -1;
   }

   while((ch=fgetc(fp))!=EOF) {
      if(ch=='\n')
         lines = lines+1;
   }
   
   fclose(fp);
   printf("Total number of lines in the file: %d\n",lines);
}