#include<stdio.h>
#include<string.h>
#include "header.h"

void course_menu3()
{
    char str2[50];
    fgets(str2,50,stdin);
    int i,x;
    for(i=0;i<42;i++)
    {
        x=strcmp(str2,course[i].cour_name);
        if(x==0)
        {
            printf("The Course Code : %s",course[i].cour_code);
            break;
        }
    }
}

