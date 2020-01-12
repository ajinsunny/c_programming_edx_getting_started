/*
Project             : Personal Study
*
* Program name      : Multiple_Integers_Process_Loop.c
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

int main(void){
    int height;
    int weight;
    int power;
    int resistance;
    int number_of_robots;
    int i = 0;
    int total_power = 0;
    scanf("%d",&number_of_robots);
    for(i = 0; i<number_of_robots; i++)
    {
        scanf("%d %d %d %d",&height,&weight,&power,&resistance);
        total_power = total_power + ((power + resistance) * (weight - height));
    }
   
    printf("%d",total_power);
    return 0;
    
}