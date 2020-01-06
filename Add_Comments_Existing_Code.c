/*
Project             : Personal Study
*
* Program name      : Add_Comments_Existing_Code.c
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

    printf ("Welcome, humans!\n");
    printf ("I am Buttons, your robot instructor! \n");
    printf ("Today we are going to learn how to love robots :) \n");
    printf ("Repeat after me: \n");

    for (i = 0; i < 3; i ++)
        printf ("I love Buttons!\n");

    printf ("Still not convinced? \n");
    printf ("In that case, let me explain some more ... \n");

/*
    for (i = 0; i < 200; i++) {
        printf ("We come in peace and kindness! \n");
        printf ("A robot cannot hurt a human being or ");
        printf ("allow a human being to be hurt. ");
    }
    */

    printf ("This is the end of today's lesson! ");
    printf ("Thank you for your cooperation, and");
    //printf ("goodbye!");    

    return(0);
}