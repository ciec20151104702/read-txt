#include<stdio.h>
#include<string.h>
int main()
{
	char *ptr1="abcdefghfjk1234567mnopqrstuvw789xyzasdf456789zxcv1236987";
	char s[11];
	int i=0;
	while(!((*(ptr1+i)=='j')&&(*(ptr1+i+1)=='k')))
	{
		i++;
	}
	strncpy(s,ptr1+i+2,7);
	s[7]='\0';
	printf("%s\n",s);
	strncpy(s,ptr1+i+20,3);
	s[11]='\0';
	printf("%s\n",s);
	strncpy(s,ptr1+i+30,6);
	s[11]='\0';
	printf("%s\n",s);
	strncpy(s,ptr1+i+40,7);
	s[11]='\0';
	printf("%s\n",s);
}
