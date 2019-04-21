#include<stdio.h>
#include"header.h"

void output()
{
    FILE *fp;

    fp=fopen("project.txt","r");
    int i;
    for(i=0;i<5;i++)
    {
        fscanf(fp,"%[^\n]s",data[i].name);
        fscanf(fp,"\n%[^\n]s",data[i].address);
        fscanf(fp,"%d %d ",&data[i].roll,&data[i].reg_no);
    }
    fclose(fp);
}


