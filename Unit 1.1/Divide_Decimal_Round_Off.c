/*
Project             : Personal Study
*
* Program name      : Divide_Decimal_Roud_Off.c
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
    
    double cement_weight;
    double price_per_bag = 45;
    double no_of_bags;
    int no_of_bags_int;
    int price;
    scanf("%lf\n",&cement_weight);

    no_of_bags = cement_weight/120 + 1;
    no_of_bags_int = (int) no_of_bags;
    price = no_of_bags_int*price_per_bag;
    printf("%d",price);
    
    return 0;
    
    
}






