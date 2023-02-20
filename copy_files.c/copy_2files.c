#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
FILE *fp,*fp1;
char ch;
fp=fopen("fir.txt","r");
fp1=fopen("sec.txt","w");
if(fp==NULL)
{
printf("no file exist");
}
else
{
while((ch=fgetc(fp))!=EOF)
{
fputc(ch,fp1);
}
fclose(fp);
fclose(fp1);
fp1=fopen("sec.txt","r");
while((ch=fgetc(fp1))!=EOF)
{
if(islower(ch))
{
ch=ch-32;
}
printf("%c",ch);
}
}
fclose(fp1);
return 0;
}


