#include<stdio.h>
#include<stdlib.h>
int str_finding(char * , char) ;
int str_count(char *);
int main(){
    FILE *file_name ;
    char line[30] ;
    int line_count = 0;
    file_name = fopen("test_file.c" , "r");
    enum sst {
        telusa = 1,
        manasa = 1,
        idhi ,
        yenati ,
        anubhandhamo ,
    };
    enum sst ok ;
    ok = telusa ;
    printf("%d\n" ,ok) ;
    ok = manasa ;
    printf("%d\n" ,ok) ;
    // while((fscanf(file_name ,"%s" ,line)!= EOF))
    // {
    //     if((str_finding(line , '\n')) == 1)
    //         ++line_count ;

    // }
    // printf("%d\n" , ++line_count);
    // fclose(file_name);
}
int str_count(char *string){
    int i =0 ;
    while(string[i++]!= '\0');
    return i ;
}
int str_finding(char *string , char chara)
{
    int i = 0, count = 0;
    count = str_count(string) ;
    while(string[i++]!= chara) ;
    if (i == count)
        return 0 ;
    else
        return 1 ;
}