// // // Defining and accessing structure members:
// #include<stdio.h>
// struct str_uct {
//     int Roll_num ;
//     char name[10] ;
//     float marks ;
// };
// void main()
// {
//     struct str_uct st = {12 , "Akhil" , 97.8} ;
//     printf("%d\n" , st.Roll_num) ;
//     printf("%s\n" , st.name);
//     printf("%f\n" , st.marks);
// }




// // // passing structures to as function 

// #include<stdio.h>
// struct str_uct {
//     int Roll_num ;
//     char name[10] ;
//     float marks ;
// };
// void function(struct str_uct *) ;
// void main()
// {
//     struct str_uct p1 ={12 ,"Akhil" ,97.5};
//     function(&p1);

// }
// void function(struct str_uct * variable)
// {
//     printf("%d\n", variable->Roll_num);
//     printf("%s\n", variable->name);
//     printf("%f\n", variable->marks);
// }

// // // array of structures
#include<stdio.h>
struct str_uct {
    int Roll_num ;
    char name[10] ;
    float marks ;
};
void function(struct str_uct *);
void main()
{
    struct str_uct arr[3] = {{12 , "a" , 12.1} , {13,"b" , 13.0} , {14 , "c" , 14.0}};
    int i ;
    for (i =0 ;i <3 ;i++)
    {
        function(&arr[i]);
    }

}
void function(struct str_uct * variable)
{
    printf("%d\n", variable->Roll_num);
    printf("%s\n", variable->name);
    printf("%f\n", variable->marks);
}