#include<stdio.h>
#include "header.h"

void structure_input()
{
    FILE *fp;
    char name[]="project.txt";
    fp=fopen(name,"w");
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s%s%d%d",&data[i].name,&data[i].address,&data[i].roll,&data[i].reg_no);
        fprintf(fp,"%s  %s  %d  %d\n",data[i].name,data[i].address,data[i].roll,data[i].reg_no);
    }
    fclose(fp);
}
