#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    if((fp=fopen("C:\\Users\\jszx\\Documents\\export.gpx","rt"))==NULL){
        printf("Can't open file strike any key exit!\n");
        getch();
        exit(1);
    }
    ch=fgetc(fp);
    while(ch!=EOF){
        putchar(ch);
        ch=fgetc(fp);
    }
    fclose(fp);
}
