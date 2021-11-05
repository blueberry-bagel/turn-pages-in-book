#include "functions.h"


int main(int argc, char* argv[])
{
    int *totalpage = 0;
    int *page = 0;
    
    if(argc < 2){
        printf("Not enough command line arguments! Exiting the program!");
        exit(1);
    }
    
    FILE *fp;
    fp = fopen(argv[1], "r");
    
    if(fp == NULL){
        printf("File did not open successfully! Exiting the program!");
        exit(2);
    }
    
    readData(fp, totalpage, page);

	return 0;
}
