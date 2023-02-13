#include<stdio.h>
int main(){
char para[100];
int letter=0,word=0,line=0,i;
printf("enter a paragraph and terminate it with.");
scanf("%[^.]s",para);
for(i=0; para[i]!='\0';i++)
{
if (para[i]!=' ' && para[i]!='.' && para[i]!='\n')
{
letter++;
}
if(para[i]==' ' || para[i]=='\n')
{
word++;
}
if(para[i]=='\n')
{
line++;
}
}
printf("number of letter %d\n",letter);
printf("number of words %d\n",word);
printf("number of sentences %d\n",line);
return 0;
}
