//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/26.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>


int main(void){
    FILE* fp ;
    char filename[100];
    
    //file open
    printf("input the file name : ");
    scanf("%s", filename);
    
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("input filename is invalid (%s)\n", filename);
        return -1 ;
    }
    
    //bring words from fp
    
    //bring a word
    
    fclose(filename);
}
