#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    
    int fd = 0; 
    char FileName[30];
    char Arr[100];

    printf("Enter the filename that you want to Open : \n");
    scanf("%s",&FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
        return 0;
    }
    
    printf("Enter The data that you want to write :\n");
    scanf("%[^'\n']s",Arr);
    write(fd,Arr,strlen(Arr));

    return 0;
}