#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("     ****************************");
    printf("\n\t  STRING OPERATIONS");
    printf("\n\t1.Length of String");
    printf("\n\t2.Concatenating String");
    printf("\n\t3.Reverse of String");
    printf("\n\t4.Copy of String");
    printf("\n");
    int ch;
    printf("\n\t Enter Choice :");
    scanf("%d",&ch);
    printf("     ****************************");
    printf("\n");
    if (ch==1)
    {
        length();
    }
    if (ch==2)
    {
        concat();
    }
    if (ch==3)
    {
        reverse();
    }
    if (ch==4)
    {
        copy();
    }
}

void length()
{
    char str[50];
    printf("\n\t Length of String");
    printf("\n");
    printf("\n     Enter String :");
    scanf("%s",&str);
    int i=0,c=0;
    while (str[i]!=NULL)
    {
        i=i+1;
        c=c+1;
    }
    printf("\n\t    Length :%d",c);
    printf("\n");
}

void concat()
{
    char str1[50],str2[50],str3[100];
    printf("\n       Concatenating Strings");
    printf("\n");
    printf("\n     Enter String 1 :");
    scanf("%s",&str1);
    printf("\n     Enter String 2 :");
    scanf("%s",&str2);
    for (int i=0;i<strlen(str1);i=i+1)
    {
        str3[i]=str1[i];
    }
    for (int j=0;j<strlen(str2);j=j+1)
    {
        str3[j+strlen(str1)]=str2[j];
    }
    printf("\n    New String :%s",str3);
    printf("\n");
}

void reverse()
{
    char str[50],rev[50];
    printf("\n\t Reverse of String");
    printf("\n");
    printf("\n     Enter String :");
    scanf("%s",&str);
    int len=strlen(str),j=0;
    for (int i=len-1;i>=0;i=i-1)
    {
        rev[j]=str[i];
        j=j+1;
    }
    printf("\n     Reverse String :%s",rev);
    printf("\n");
}

void copy()
{
    char str[50],strc[50],s2[50];
    printf("\n\t Copy of String");
    printf("\n");
    printf("\n     Enter String :");
    scanf("%s",&str);
    for (int i=0;i<strlen(str);i=i+1)
    {
        strc[i]=str[i];
    }
    printf("\n     Copied String :%s",strc);
    printf("\n");
}
