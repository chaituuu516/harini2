#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
        int i,j;
	printf("enter a string:");
	gets(str);
      	i=strlen(str);
	for(j=i;j>=0;j++)
	{
	printf("%c",str[j]);
 	}
}


