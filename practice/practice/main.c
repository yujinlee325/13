//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/26.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int is_whitespace(char c){

    if (c == ' ' ||
        c == '\n' ||
        c == '\r' ||
        c == '\t' ||
        c == '(' )
        return 1;
        
    return 0;
}

int fget_word(FILE *fp, char* word){
   
    char c;
    int cnt;
    
    while((c=fgetc(fp)) != EOF) {
        if(is_whitespace(c) == 0)
            break;
    }
    if (c == EOF)
        return 0;
    
    //filling out the word
    cnt = 0;
    word[cnt++] = c;
    word[cnt] = '\0' ;
    
    while ((word[cnt]=fgetc(fp)) != EOF){
        if(is_whitespace(word[cnt]) == 1)
        {
            word[cnt] = '\0';
            break;
        }
        cnt++;
    }
    return cnt;
}


int main(void){
    FILE* fp ;
    char filename[100];
    char word[100];
    int cnt;
    
    //file open
    printf("input the file name : ");
    scanf("%s", filename);
    
    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("input filename is invalid (%s)\n", filename);
        return -1 ;
    }
    //bring words from fp
    while (fget_word(fp, word) != 0) {//bring a word
            count_word(word);
    }
    print_word();
    
    /*
    cnt = fget_word(fp, word);
    printf("%s (%i)\n", word, cnt);
    
    cnt = fget_word(fp, word);
    printf("%s (%i)\n", word, cnt);
    
    cnt = fget_word(fp, word);
    printf("%s (%i)\n", word, cnt);
    */
   
    
    fclose(fp);
}
