/*count  the bytes of file*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

void file_bytes(char file_name[]){

    struct stat st;
    stat(file_name, &st);
    int size = st.st_size;
    printf("file size is : %d \n",size);

}