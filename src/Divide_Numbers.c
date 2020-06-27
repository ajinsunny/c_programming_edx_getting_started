/*
Project              : Personal Study
*
* Program name      : Divide_Numbers.c
*
* Author            : Ajin
*
* Date created      : 20200109
*
* Purpose           : Learn
*
* Revision History  : 20200109
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200109    Ajin          1      First commit on 20200109

*/

#include<stdio.h>
int main(void){
    
    double temp_F;
    double temp_C;
    scanf("%lf", &temp_C );
    temp_F =  temp_C * (9.0 / 5.0) + 32.0;
    printf("%.1lf",temp_F);
    
    
}