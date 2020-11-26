//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/26.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

struct student{
    int ID ;
    char name[100];
    double grade ;
    
    
};

int main(void){
    struct student s1 = {1810751, "YuJin", 4.3} ;
    
    s1.ID = 456123;
    s1.grade = 2.0;
    
    printf("ID, %d\n", s1.ID);
    printf("name, %s\n", s1.name);
    printf("grade, %f\n", s1.grade);
    
    
    
    
    
}
