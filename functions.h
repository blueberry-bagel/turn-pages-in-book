#ifndef FUNCTIONS_H
#define FUCNTIONS_H

#include <stdio.h>
#include <stdlib.h>


/*
return: void

param: integer size of the book, integer page you want to turn to

descrip: this functions calculates the fastest way to turn to
    your page and how many pages it will take printing details
*/
void howManyTurns(int, int);

/*
return: void

param: file pointer, integer pointer total number of pages, 
    integer page that you want to turn to

descrip: this function reads the size of the book and the page the
    user wants to turn to from the file and stores that data in 
    the integer pointers
*/
void readData(FILE*, int*, int*);

/*
return: void

param: integer total pages in book, integer page the user wants
    to turn to

descrip: this function checks if the page the user wants to turn to
    is larger than the book and exits if it is.
*/
void checkData(int, int);


#endif
