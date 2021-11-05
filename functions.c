#include "functions.h"

void howManyTurns(int size, int page)
{
    int ans = size - page;
    int half = size / 2;
    int front = 0;
    int back = 0;
    int p1 = page;
    int p2 =  page;
    
    if(page < half){
        
        front = (ans/2)+1;
        if(p1 == 2){
            printf("1 page from the front");
        }else{
            printf("%d pages from the front", front);
        } 
        
    }else{
        back = (ans/2)+1;
        if(p2 == (size-2)){
            printf("1 page from the back");
        }else{
            printf("%d pages from the back", back);
        }
        
    }
    
    
}

void readData(FILE* in, int* totalPages, int* desiredPage)
{
    int total = 0;
    int page = 0;
    
    fscanf(in, "%d", &total);
    fscanf(in, "%d", &page);
    
    totalPages = &total;
    desiredPage = &page;
    
    fclose(in);
    
    checkData(*totalPages, *desiredPage);
    
    
}

void checkData(int totalPages, int desiredPage)
{
    
    if(desiredPage > totalPages){
        
        printf("The total pages in the book is smaller than the page you are looking for!");
        printf("\nExiting the program!");
        exit(1);
        
    }else{
        howManyTurns(totalPages, desiredPage);
    }
    
    
    
}
