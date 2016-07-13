#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i=0;
	FILE *fp1,*fp;
	int flen;
	char lon[30];
	char lat[30];
	char date[30];
	char time[30];
	char *ptr;
    fp1 = fopen("export.gpx","r");
    fp=fopen("export.csv","w");
    if(fp==NULL)
        {    
        	printf("打开文件%s失败!\n");
        	return -1;
		}
	fseek(fp1,0,SEEK_END);
	flen=ftell(fp1);	
	fseek(fp1,0,SEEK_SET);
	ptr=(char *)malloc(1*flen);
	fread(ptr,1,flen,fp1);
	ptr[flen]='\0';
	fprintf(fp,"精度  维度  日期  时间\n");
	while(!(ptr[i]=='<'&&ptr[i+1]=='/'&&ptr[i+2]=='g'&&ptr[i+3]=='p'&&ptr[i+4]=='x'&&ptr[i+5]=='>'))
	{
		if(ptr[i]==' '&&ptr[i+1]=='l'&&ptr[i+2]=='a'&&ptr[i+3]=='t');
	}
	while(!((*(ptr+i)=='l')&&(*(ptr+i+1)=='a')&&(*(ptr+i+2)=='t')))
		{
			i++;
		}
		strncpy(lat,ptr+i+3,9);
		lat[9]='\0';
		printf("%s\n",lat);
		while(!((*(ptr+i)=='l')&&(*(ptr+i+1)=='o')&&(*(ptr+i+2)=='n')))
		{
			i++;
		}
		strncpy(lon,ptr+i+4,10);
		lon[10]='\0';
		printf("%s\n",lon);
			while(!((*(ptr+i)=='t')&&(*(ptr+i+1)=='i')&&(*(ptr+i+2)=='m')&&(*(ptr+i+3)=='e')))
		{
			i++;
		}
		strncpy(time,ptr+i+4,20);
		time[20]='\n';
		printf("%s\n",time);
		printf("len=%d     %c\n",flen,ptr[10]);
		fclose(fp1);
		return 0;
}
