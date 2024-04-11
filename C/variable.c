#include<stdio.h>
#include<stdarg.h>
int sum (int ,...);
void main()
{
    int a =1 , b =2,c =3 ,total;
    total =sum(3,a,b,c);
    printf("%d\n" ,total);
}
int sum(int var ,...){
    va_list start ;
    va_start(start , var) ;
    int tota = 0, i ;
    for(i =0;i<var ; i++)
        tota = tota + va_arg(start , int) ;

    return tota ;
}