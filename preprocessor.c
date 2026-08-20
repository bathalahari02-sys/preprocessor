#include<stdio.h>
#include<string.h>
void include_process(FILE *,FILE *);
void define_process(FILE *,FILE *);
extern char macro_name[10][20];
extern char macro_value[10][20];
extern int macro_count;
int main(int argc,char **argv)
{

	FILE *fp,*out;
	int ch,next;
           

	if(argc!=2)
	{
		printf("Usage:./my_preprocessor fname:\n");

		return 1;
	}

	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not found:\n");
		return 1;
	}

	else
	{

		printf("file opened succesfully\n");

	}



	out=fopen("abc.i","w");
	if(out==0)
	{
		printf("out is failed to open:\n");
		return 1;
	}


	while((ch=fgetc(fp))!=EOF)
	{

		if(ch=='#')
		{


			ch=fgetc(fp);

			if(ch=='i')
			{

				include_process(fp,out);
			}


			else if(ch=='d')
			{
				define_process(fp,out);
			}
		}




		else if(ch=='/')
		{

			next=fgetc(fp);
			if(next=='/')
			{
				while((ch=fgetc(fp))!='\n' && ch!=EOF)
				{
				}

				if(ch=='\n')
					fputc(ch,out);
			}


			else if(next=='*')
			{



                                         while(1)
                                         {
                                                 ch=fgetc(fp);

                                                 if(ch=='*')
                                                 {
                                                         next=fgetc(fp);

                                                         if(next=='/')
                                                                 break;
                                                 }
 
                                                  if(ch==EOF)
 
                                                          break;
                                         }


                                 }


			else
			{
				fputc(ch,out);
				fputc(next,out);
			}
		}

		else
		{


			char word[50];
			int i=0;



while(ch!=' ' && ch!='\n' && ch!=';' && ch!='=' && ch!='('&& ch!=')' && ch!=',' && ch!=EOF)
			{

				word[i]=ch;
				i++;
				ch=fgetc(fp);
			}


			word[i]='\0';

			int j;

			for(j=0;j<macro_count;j++)
			{

				if(strcmp(word,macro_name[j])==0)
				{

					fprintf(out,"%s",macro_value[j]);
					break;

				}
			}

			if(j==macro_count)
			{

				fprintf(out,"%s",word);
			}





			
			if(ch!=EOF)
				fputc(ch,out);
		}




	}



	fclose(fp);
	fclose(out);

	printf("processing completed:\n");

	return 0;
}



