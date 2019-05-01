#include<stdio.h>
#include "header.h"

void store_marks()
{
    FILE *pp;

    pp=fopen("mark.txt","r");
    int i,j;
    printf("%c %c %c %c\n",data[2].roll[4],data[2].roll[5],data[2].roll[6],data[2].roll[7]);
    for(i=0;i<32;i++)
    {
        if(data[i].roll[4]=='1' && data[i].roll[5]=='1')
        for(j=0;j<12;j++)
        {
            fscanf(pp,"%d",&data[i].y1[j]);
        }
        if(data[i].roll[4]=='1' && data[i].roll[5]=='0')
        for(j=0;j<24;j++)
        {
            fscanf(pp,"%d",&data[i].y1[j]);
        }
        if(data[i].roll[4]=='0' && data[i].roll[5]=='9')
        for(j=0;j<36;j++)
        {
            fscanf(pp,"%d",&data[i].y1[j]);
        }
        if(data[i].roll[4]=='0' && data[i].roll[5]=='8')
        for(j=0;j<42;j++)
        {
            fscanf(pp,"%d",&data[i].y1[j]);
        }
    }
    fclose(pp);
}
