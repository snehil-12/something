#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char arr[50];
    int i;
    char ch;
    fp=fopen("G:\\c project\\data.txt","w");
    if(fp==NULL){
        printf("sorry");
        return 1;
    }
    printf("enter the message\n");
    gets(arr);
        for(i=0;arr[i]!='\0';i++){
            ch=arr[i];
            fputc(ch,fp);
        }

    fclose(fp);
    printf("done");
    return 0;

}
