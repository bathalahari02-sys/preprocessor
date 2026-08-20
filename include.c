#include<stdio.h>

void include_process(FILE *fp,FILE *out)
{



	char fname[50];
	int ch,i=0;
	FILE *inc;

	while((ch=fgetc(fp))!='"')
	{
	}


	while((ch=fgetc(fp))!='"')
	{

		fname[i]=ch;
                  i++;
	}


	fname[i]='\0';

    printf("filename=%s\n",fname);

	inc=fopen(fname,"r");

	if(inc==0)
	{

		printf("header file is not found:\n");

		return;
	}


	while((ch=fgetc(inc))!=EOF)
	{
		fputc(ch,out);
	}

	fclose(inc);

	while((ch=fgetc(fp))!='\n' && ch!=EOF)
	{
	}


	fputc('\n',out);
}
