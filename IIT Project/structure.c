#include<stdio.h>
#include"header.h"

void output()
{
    FILE *fp;

    fp=fopen("project.txt","r");
    int i;
    for(i=0;i<32;i++)
    {
        fscanf(fp,"\n%[^\n]s",data[i].name);
        fscanf(fp,"\n%[^\n]s",data[i].address);
        fscanf(fp,"\n%[^\n]s",data[i].roll);
        fscanf(fp,"%d",&data[i].reg_no);
    }
    fclose(fp);
}


