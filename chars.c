/*the character counts*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdio.h>

void file_chars(char file_name[]){

   FILE *fp ;
   char c ;
   fp = fopen ( file_name, "r" ) ;
   if ( fp == NULL )
   {
     printf ( "Could not open file test.c" ) ;
     return 1;
   }
   int number = 0;
   while ( 1 )
   {
     c = fgetc ( fp ) ;
     if ( c == EOF )
     break ;
     if (c!="\n"||c!="\t"||c!=",")
     number = number+1;
   }

   printf(" %d character in file \n ",number) ;
   fclose ( fp ) ;

}