/*
Project             : Personal Study
*
* Program name      : Characters_ASCII_art.c
*
* Author            : Ajin
*
* Date created      : 20200109
*
* Purpose           : Learn
*
* Revision History  : 20200108
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200109    Ajin          1      First commit on 20200109

*/


#include<stdio.h>
int main(void){
    
    char c;
    scanf("%c",&c);
    
    printf("++++%c++++\n",c);
    printf("+++%c%c%c+++\n",c,c,c);
    printf("++%c%c%c%c%c++\n",c,c,c,c,c);
    printf("+%c%c%c%c%c%c%c+\n",c,c,c,c,c,c,c);
    printf("%c%c%c%c%c%c%c%c%c\n",c,c,c,c,c,c,c,c,c);
    
    return 0;
}
