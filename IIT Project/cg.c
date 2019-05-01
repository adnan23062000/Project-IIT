#include<stdio.h>
#include<string.h>
#include "header.h"

void cg()
{
    double sum=0,q=0,p;
    int i,j;
    for(i=0;i<32;i++)
    {
        for(j=0;j<42;j++)
        {
            p=data[i].y1[j];
            if(p==0)
            {
                continue;
            }
            else if(p>=80)
            {
                data[i].cg[j]=4;
                sum++;
            }
            else if(p>=75 && p<80)
            {
                data[i].cg[j]=3.75;
                sum++;
            }
            else if(p>=70 && p<75)
            {
                data[i].cg[j]=3.5;
                sum++;
            }
            else if(p>=65 && p<70)
            {
                data[i].cg[j]=3.25;
                sum++;
            }
            else if(p>=60 && p<65)
            {
                data[i].cg[j]=3.00;
                sum++;
            }
            else if(p>=55 && p<60)
            {
                data[i].cg[j]=2.75;
                sum++;
            }
            else if(p>=50 && p<55)
            {
                data[i].cg[j]=2.50;
                sum++;
            }
            else if(p>=45 && p<50)
            {
                data[i].cg[j]=2.25;
                sum++;
            }
            else if(p>=40 && p<45)
            {
                data[i].cg[j]=2.00;
                sum++;
            }
            else
            {
                data[i].cg[j]=0.00;
                sum++;
            }

            q = q + data[i].cg[j];
        }

        data[i].cgpa = q/sum;
        q=0;
    }
}
