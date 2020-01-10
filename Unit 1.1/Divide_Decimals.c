/*
Project             : Personal Study
*
* Program name      : Divide_Decimal.c
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
    double tot_amount;
    double price_per_book;
    double no_of_books;
    int no_of_books_int;
    scanf("%lf\n",&tot_amount);
    scanf("%lf",&price_per_book);
    
    no_of_books = tot_amount/price_per_book;
    no_of_books_int = (int) no_of_books;
    printf("%d",no_of_books_int);
    
    return 0;
    
    
}