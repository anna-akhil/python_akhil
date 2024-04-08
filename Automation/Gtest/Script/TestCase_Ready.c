
#include<stdio.h>
#include<stdlib.h>
void str_adding (char *) ;
int str_length( char *) ;
int str_cmp(char * , char *) ;
void str_string_add(char * , char *) ;
char * str_extract(char * , char) ;
void str_copy(char * , char *) ;
int str_count(char *) ;
void str_buffer_clear (char *) ;
void str_char_add (char * , char);
char save[20] ;
int main(){
        FILE *scource , *destination ;
        int status = 0 ,number = 0 ;
        char data_type[6][20] = { "void" ,"int" , "char" ,"float" ,"char *" , "float *" } ;
        char string[30] , checking[20] , function_name [20];
        char TEST[5][20] = {"TEST(" , "_test ," , "Testcase ) { \n" ,"      ", "\n} "} ;
        scource = fopen("test.c" , "r") ;
        destination = fopen("Theliyadhu.cpp" , "w") ;
        while (fscanf(scource , "%s" , string) != EOF)
        {
                str_copy(str_extract(string , '(') , checking) ;
                for (size_t i = 0; i < 6; i++)
                {
                    if (str_cmp(checking , data_type[i]) == 0)
                    {
                            status = 1;
                            number++ ;
                    }
                    if (status == 1)
                    {
                        fscanf(scource , "%s" , string) ;
                        str_copy(str_extract(string , '(') , string);
                        str_copy(string , function_name);
                        fputs(TEST[0] , destination) ;
                        for (size_t i = 1; i < 6; i++)
                        {
                            if (i == 5)
                            {
                                fprintf(destination , "\n") ;
                                fprintf(destination , "\n") ;
                            }
                            else if (i == 3)  // this condition is for call the function in testcase
                            {
                                fputs(TEST[i] , destination);
                                str_string_add(function_name ,"() ;") ;
                                fputs(function_name , destination);
                            }
                            else              // this part is for the adding all the strings
                            {
                                if ( i == 1)
                                {
                                    str_char_add(string ,number+48);
                                    printf("%s\n" ,string);
                                }
                                
                                str_string_add(string ,TEST[i]) ;
                                fputs(string , destination) ;
                            }
                            str_buffer_clear(string);
                        }
                        status = 0 ;
                    }                 
                }
        }
}
void str_buffer_clear(char *buffer){
    buffer[0] ='\0';
}


void str_copy(char *scource , char *destination){
    int i ;
    for ( i =0 ; scource[i] != '\0' ; i++){
        destination[i] = scource[i] ;
    }
    destination[i] = '\0' ;
}

char * str_extract( char *variable , char var){
    int i ;
    for ( i = 0 ; variable[i] != var ; i++){
        save[i] = variable[i];
    }
    save[i] = '\0';
    return save ;
}

int str_cmp(char * first , char * second){
    int i ;
    if (str_count(first) != str_count(second))
    {
        return 1 ;
    }
    for (i = 0 ; first[i] != '\0' ; i++){
        if (first[i] != second[i]){
            return 1 ;
        }
    }
    return 0 ;
}

int str_count( char *variable){
    int i = 0 , count = 0;
    while (variable[i++] != '\0')
    {
        count++ ;
    }
    return count ;
}

void str_string_add(char *desti , char *source){
    int count , i;
    count = str_count(desti);
    for ( i = 0 ; source[i] != '\0' ; i++){
        desti[count + i] = source[i] ;
    }
    desti[count+i] = '\0' ;
}

void str_char_add(char *desti , char source){
    int count ;
    count = str_count(desti);
    desti[++count] = source ;
    desti[++count] = '\0' ;
}