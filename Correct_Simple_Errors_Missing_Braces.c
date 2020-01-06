/*
Project             : Personal Study
*
* Program name      : Correct_Simple_Missing_Errors_Braces.c
*
* Author            : Ajin
*
* Date created      : 20200105
*
* Purpose           : Learn
*
* Revision History  : 20200105
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200105    Ajin          1      First commit on 20200105

*/


#include <stdio.h>

int main(void) {

    int i;

    printf("+");
    for (i = 0; i < 23; i++)
        {printf("-");}
    printf("+\n");

    for (i = 0; i < 3; i++)
    {
         printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
        
    }
       

    printf("+");
    for (i = 0; i < 23; i++)
        {printf("-");}
    printf("+");

    return(0);
}