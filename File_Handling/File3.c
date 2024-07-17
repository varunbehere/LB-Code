#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    
    int fd = 0; 
    char FileName[30];

    printf("Enter the filename that you want to Open : \n");
    scanf("%s",&FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File gets Opened successfully with fd %d\n",fd);
    }

    return 0;
}

/*
This Parameters can be given to the open Function.

    O_RDWR          Read + Write Mode
    O_READONLY      Read Only Mode
    O_WRONLY        Write Only Mode
    O_CREATE        Create Mode
    O_APPEND        Append Mode

*/