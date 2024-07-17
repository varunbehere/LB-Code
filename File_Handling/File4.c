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
        return 0;
    }
    
    write(fd,"Jay Ganesh",10);

    return 0;
}