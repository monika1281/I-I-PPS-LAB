#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("fir.txt","w+");
if(fp==NULL)
{
printf("file cannot be created");
exit(1);
}
else
{
while((ch=getchar())!='\n')
{
fputc(ch,fp);
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
}
fclose(fp);
return 0;
}

