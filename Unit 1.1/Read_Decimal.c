/*
Project              : Personal Study
*
* Program name      : Read_Decimal.c
*
* Author            : Ajin
*
* Date created      : 20200109
*
* Purpose           : Learn
*
* Revision History  : 20200105
*
* Date        Author      Ref    Revision (Date in YYYYMMDD format) 
* 20200109    Ajin          1      First commit on 20200109

*/


#include<stdio.h>
int main(void){
    double distance_km;
    double distance_miles;
    scanf("%lf",&distance_km);
    distance_miles = distance_km * 0.621371;
    printf("%.6lf",distance_miles);
    
    return 0;
}


