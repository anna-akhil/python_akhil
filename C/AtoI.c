#include<stdio.h>
#include<stdlib.h>
int str_count(char *);
void main()
{
    char str[10] = "123" , str1[10] , te , str2[10];
    int var =0 ,i ,multi ,var1;
    for(i =0 ;str[i]!='\0';i++)
    {
        var = var *10 +(str[i]-48);
    }
    printf("own atoi is = %d\n" , var);
    printf("atoi = %d\n" ,atoi(str));
    i =0 ;
    var1 = var ;
    while (var)
    {
        multi = var %10 ;
        str1[i++] = multi +48 ;
        var = var/10;
    }
    str1[i++] ='\0';
    multi = str_count(str1);
    for (i =0 ,multi =multi-1 ;i<multi;i++,multi--)
    {
        te = str1[i];
        str1[i] =str1[multi];
        str1[multi] =te;
    }
    printf(" own sprintf =%s\n" ,str1);
    sprintf(str2 ,"%d" ,var1);
    printf("sprintf = %s\n" , str2);
}
int str_count(char *var){
    int count = 0;
    while(var[count++]!='\0');
    return --count;
}