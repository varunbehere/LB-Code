#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fdRead = 0, fdWrite = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter the existinf file name : \n");
    scanf("%s",FileName);

    fdRead = open(FileName,O_RDWR | O_APPEND);
    if(fdRead == -1)
    {
        printf("Unable to Open file\n");
        return 0;
    }

    printf("Enter the file name to create : \n");
    scanf("%s",FileName);
    fdWrite = creat(FileName, 0777);
    if(fdWrite == -1)
    {
        printf("Unable to Open file\n");
        return 0;
    }
    // fdWrite = open(FileName,O_RDWR | O_APPEND);

    while ((iRet = read (fdRead , Buffer, sizeof (Buffer))) != 0){
      write(fdWrite, Buffer, iRet);
      memset (Buffer, 0, sizeof(Buffer));                           //it empties the buffer parameters are : one which want to change, what we want to replace it with, and until when
    }
    close(fdWritee);
    close(fdRead);
    return 0;
}
