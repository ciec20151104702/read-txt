#include<stdio.h>
int main()
{
	int a;
	char b,c[100];
	FILE *fp1=fopen("1101.txt","r");
	FILE *fp2=fopen("1101.txt","w");
	if(fp1==NULL||fp2==NULL)
	{
	puts("Can't open it");
	return 0;
    }
    fscanf(fp1,"%d",&a);
    printf("%ld",ftell(fp1));
    fputs(c,fp2);
    fputc(b,fp2);
    fprintf(fp2,"%d",a);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

