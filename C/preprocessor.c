#include<stdio.h>
#define concatinate(a ,b) a##b
void main(){
    int ab = 56 ;
    printf("%d\n" , concatinate(a,b));
}