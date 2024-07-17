#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    
    int fd = 0; 
    char FileName[30];

    printf("ENter the filename that you want to create : \n");
    scanf("%s",&FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets created successfully with fd %d\n",fd);
    }

    return 0;
}