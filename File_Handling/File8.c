#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{

    int fd = 0;
    char FileName[30];
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the filename that you want to Open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
        return 0;
    }

    iRet = read(fd,Arr,10);
    printf("Data from the file : %s\n",Arr);

    iRet = read(fd,Arr,10);
    printf("Data from the file : %s\n",Arr);

    close(fd);

    return 0;
}
