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
// #include<stdio.h>
// struct str_uct {
//     int Roll_num ;
//     char name[10] ;
//     float marks ;
// };
// void function(struct str_uct *);
// void main()
// {
//     struct str_uct arr[3] = {{12 , "a" , 12.1} , {13,"b" , 13.0} , {14 , "c" , 14.0}};
//     int i ;
//     for (i =0 ;i <3 ;i++)
//     {
//         function(&arr[i]);
//     }

// }
// void function(struct str_uct * variable)
// {
//     printf("%d\n", variable->Roll_num);
//     printf("%s\n", variable->name);
//     printf("%f\n", variable->marks);
// }


// allocating dynamic memory to structure

// #include<stdio.h>
// struct str_uct {
//     int Roll_num ;
//     char *name ;
//     float marks ;
// };

// void main()
// {
//     struct str_uct *point ;
//     printf("Allocating dynamic memory to structure\n");
//     point = malloc(sizeof(struct str_uct));

//     point->Roll_num = 12 ;
//     point->name = "Akhil" ;
//     point->marks = 12.0 ;

//     function(point);
//     free(point->name);
//     free(point);
// }

// void function(struct str_uct * variable)
// {
//     printf("%d\n", variable->Roll_num);
//     printf("%s\n", variable->name);
//     printf("%f\n", variable->marks);
// }


// Nested structures
// #include<stdio.h>
// #include<string.h>
// struct str_uct {
//     int Roll_num ;
//     char name[10] ;
//     float marks ;
//     struct structure1
//     {
//         int branch_code ;
//         char branch[10] ;
//     }ong;
    
// };

// void main()
// {
//     struct str_uct nest ;
//     printf("Nested structures\n");
//     nest.marks = 99 ;
//     strcpy(nest.name, "Akhil");
//     nest.Roll_num = 12 ;
//     nest.ong.branch_code = 13 ;
//     strcpy(nest.ong.branch ,"ECE") ;

//     printf("%f\n" , nest.marks) ;
//     printf("%s\n" , nest.name) ;
//     printf("%f\n" , nest.marks) ;
//     printf("%d\n" , nest.ong.branch_code) ;
//     printf("%s\n" , nest.ong.branch) ;
// }

// Self referential structures
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct struct1
{
    int rollno ;
    char name[10] ;
    float marks ;
    struct struct1 *p ;
} ;

void main()
{
    struct struct1 *self ;
    self = malloc(sizeof(struct struct1));
    self->marks = 12 ;
    self->rollno = 12 ;
    strcpy(self->name , "akhil..." );

    printf("%f\n" , self->marks);
    printf("%d\n" , self->rollno);
    printf("%s\n",self->name);
}