/*
Project             : Personal Study
*
* Program name      : Custom_Multiplication_Table.c
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
* 20200108    Ajin          1      First commit on 20200108

*/


#include<stdio.h>

int main(void)
{
    int table_num;
    int multiple = 0;
    int i;
    int result = 0;
    scanf("%d",&table_num);
    for(i=0;i<=10;i++)
    {
    result = multiple * table_num;
    printf("%dx%d = %d\n",multiple,table_num,result);
    multiple = multiple + 1;
    }
    return 0;
}