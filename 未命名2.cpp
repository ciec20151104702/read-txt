#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp,*fp1;
	int i=0,m=0,n=0,j=0,k=0;
	int flen;
	char *ptr;
	char lon[30];
	char lat[30];
	char date[30];
	char time[30];
    fp=fopen("export.gpx","r");
    fp1=fopen("export.csv","w");
    if(fp==NULL)
        {    
        	printf("打开文件%s失败!\n");
        	return -1;
		}
	fseek(fp,0,SEEK_END);
	flen=ftell(fp);	
	fseek(fp,0,SEEK_SET);
	ptr=(char *)malloc(1*flen);
	fread(ptr,flen,1,fp);
	ptr[flen]='\0';
	fprintf(fp1,"精度  维度  日期  时间\n");
	while(!(ptr[i]=='<'&&ptr[i+1]=='/'&&ptr[i+2]=='g'&&ptr[i+3]=='p'&&ptr[i+4]=='x'&&ptr[i+5]=='>'))
	{
		if(ptr[i]==' '&&ptr[i+1]=='l'&&ptr[i+2]=='a'&&ptr[i+3]=='t');
		
     	
	while(!((*(ptr+n)=='l')&&(*(ptr+n+1)=='o')&&(*(ptr+n+2)=='n')))
		{
			n++;
	
		strncpy(lon,ptr+n+4,10);
		lon[10]='\0';
		printf("%s\n",lon);
		
	    }	
	
	while(!((*(ptr+j)=='d')&&(*(ptr+j+1)=='a')&&(*(ptr+j+2)=='t')&&(*(ptr+j+3)=='e')))
		{
			j++;
	
		strncpy(date,ptr+j+5,10);
		date[10]='\0';
		printf("%s\n",date);
	    }
	    
	while(!((*(ptr+k)=='t')&&(*(ptr+k+1)=='i')&&(*(ptr+k+2)=='m')&&(*(ptr+k+3)=='e')))
		{
			k++;
	
		strncpy(time,ptr+k+5,8);
		time[8]='\0';
		printf("%s\n",time);
	   }
		fprintf(fp1,"%s,%s,%s,%s\n",lat,lon,date,time);
    }
		fclose(fp1);
		fclose(fp);
		free(ptr);
        return 0;
	}

