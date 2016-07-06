#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int flen;
	char *str;
	if((fp=fopen("c:\\Users\\jszx\\Documents\\export.gpx","r"))==0)
	{
		printf("Can't open file!\n");
		return -1;
	}
	fseek(fp,0,SEEK_END);
	flen=ftell(fp);
	fseek(fp,0,SEEK_SET);
	fread(str,10,flen,fp);
	printf("len=%d    %c\n",flen,str[0]);
	fclose(fp);
	return 0;
}
