#include<stdio.h>
#include<string.h>
#include "header.h"

void course_menu2()
{
    char str[10];
    scanf("%s",str);
    int i,x;
    for(i=0;i<42;i++)
    {
        x=strcmp(str,course[i].cour_code);
        if(x==0)
        {
            printf("\nThe Course Name : %s",course[i].cour_name);
            break;
        }
    }
}

