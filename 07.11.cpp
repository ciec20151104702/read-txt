#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	FILE *fp2;
	char text[1024];
	fp1=fopen("c:\\1101.txt","r");
	fp2=fopen("c:\\1101.txt","w");
	while(fgets(text,1024,fp1)!=NULL);
	puts(text);
    fputs(text,fp2);
    fclose(fp1);
    fclose(fp2);
}
