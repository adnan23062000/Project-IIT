#include<stdio.h>
#include<string.h>
#include "header.h"

void grade(int n)
{
    int i;
    if(n>=80)
    {
        char x[]="A+";
        printf("%s\n",x);
    }
    else if(n>=75 && n<80)
    {
        char x[]="A+";
        printf("%s\n",x);
    }
    else if(n>=70 && n<75)
    {
        char x[]="A";
        printf("%s\n",x);
    }
    else if(n>=65 && n<70)
    {
        char x[]="B+";
        printf("%s\n",x);
    }
    else if(n>=60 && n<65)
    {
        char x[]="B";
        printf("%s\n",x);
    }
    else if(n>=55 && n<60)
    {
        char x[]="B-";
        printf("%s\n",x);
    }
    else if(n>=50 && n<55)
    {
        char x[]="C+";
        printf("%s\n",x);
    }
    else if(n>=45 && n<50)
    {
        char x[]="C";
        printf("%s\n",x);
    }
    else if(n>=40 && n<45)
    {
        char x[]="D";
        printf("%s\n",x);
    }
    else
    {
        char x[]="F";
        printf("%s\n",x);
    }
}

