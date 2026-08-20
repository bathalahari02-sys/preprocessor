#include<stdio.h>
#include<string.h>

char macro_name[10][20];
char macro_value[10][20];
int macro_count=0;
void define_process(FILE *fp,FILE *out)
{

	int ch,i=0;

	while((ch=fgetc(fp))!=' ')
	{
	}


	while((ch=fgetc(fp))==' ')
	{
	}

	while(ch!=' ')
	{


		macro_name[macro_count][i]=ch;
		i++;
		ch=fgetc(fp);
	}

	macro_name[macro_count][i]='\0';

	i=0;

	while((ch=fgetc(fp))==' ')
	{
	}

	while(ch!='\n' && ch!=EOF)
	{

	macro_value[macro_count][i]=ch;
		i++;
		ch=fgetc(fp);
	}

	macro_value[macro_count][i]='\0';
macro_count++;

}

