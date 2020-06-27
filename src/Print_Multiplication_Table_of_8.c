/*
Project             : Personal Study
*
* Program name      : Print_Multiplication_Table_of_8.c
*
* Author            : Ajin
*
* Date created      : 20200108
*
* Purpose           : Learn
*
* Revision History  : 20200108
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200105    Ajin          1      First commit on 20200108

*/


#include <stdio.h>
int main(void) {
    int i;
    int multiple_8 = 0;
    int result = 0;
    for(i = 0; i < 11 ; i++) {
        result = multiple_8*8;
        printf("%dx8 = %d\n", multiple_8, result);
        multiple_8 = multiple_8 + 1;
    }
    return 0;
}
