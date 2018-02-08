#include<stdio.h>
#include<conio.h>
void main()
{
 int length=0;
 char str[100];
 printf("enter the string");
 scanf("%s",&str);
 for(i=0;str[i]!='\0';i++)
 {
 length ++;
 }
 for(=length-1;str[i]!='\0';length --)
 {
 printf("%c",str[i]);
 }
 getch();
 }
