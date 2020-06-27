/*
Project             : Personal Study
*
* Program name      : Double_to_Integers.c
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
    
    int curr_population;
    double pop_percentage;
    double future_population;
    scanf("%d\n",&curr_population);
    scanf("%lf",&pop_percentage);
    double curr_population_double; 
    curr_population_double = (double) curr_population;
    future_population = curr_population_double*(1+(pop_percentage/100));
    int future_population_int = (int) future_population;
    printf("%d",future_population_int);
    return 0;
    
}