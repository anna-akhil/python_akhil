#include<stdio.h>
#include<stdlib.h>
#include<gtest/gtest.h>
int main()
{
    // mtrace();
    int *p ,io =9;
    p = (int *)malloc(4);
    p = &io;
    printf("%d\n" , *p);
    // muntrace();
    free(p);
}
