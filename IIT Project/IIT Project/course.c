#include<stdio.h>
#include"header.h"
void course_subjects()
{
    FILE *aa;
    aa=fopen("course.txt","r");
    int n;
    for(n=0;n<42;n++)
    {
        fscanf(aa,"%s",course[n].cour_code);
        fscanf(aa,"\n%[^\n]s",course[n].cour_name);
    }
    fclose(aa);
}
