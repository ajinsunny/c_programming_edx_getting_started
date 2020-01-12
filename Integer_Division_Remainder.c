/*
Project              : Personal Study
*
* Program name      : Integer_Division_Remainder.c
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
int main(void)
{
    int no_of_matches;
    int size_of_boxes;
    int full_boxes;
    int remaining_matches;
    scanf("%d\n", &no_of_matches);
    scanf("%d\n", &size_of_boxes);
    full_boxes = no_of_matches/size_of_boxes;
    remaining_matches = no_of_matches%size_of_boxes;
    printf("%d\n",full_boxes);
    printf("%d",remaining_matches);
    return 0;
}