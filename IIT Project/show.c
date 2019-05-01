#include<stdio.h>
#include<string.h>
#include "header.h"

int show(int p)
{
    int n,i,j,k;
    double count=0;
    printf("Enter Semester : ");
    scanf("%d",&n);
    if(n==1)
    {
        //i=loop 6bar chalanor jonno, k=course 6tar jonno, p=ager function theke asha argument, j=kankhito semester er mark dekhanor jonno
        for(i=0,j=0,k=0;i<6;i++,j++,k++)
        {
            printf("COURSE : %s = %s\n",course[k].cour_code,course[k].cour_name);
            printf("Obtained Marks : %d\nObtained gpa : %.2lf\n",data[p].y1[j],data[p].cg[j]);
            printf("The Grade : ");
            grade(data[p].y1[j]);
            count= count + data[p].cg[j];
        }
        printf("CGPA of this semester : %.2lf\n\n",count/6);
        printf("Total CGPA : %.2lf\n\n",data[p].cgpa);
    }
    if(n==2)
    {
        for(i=0,j=6,k=6;i<6;i++,j++,k++)
        {
            printf("COURSE : %s = %s\n",course[k].cour_code,course[k].cour_name);
            printf("Obtained Marks : %d\nObtained gpa : %.2lf\n",data[p].y1[j],data[p].cg[j]);
            printf("The Grade : ");
            grade(data[p].y1[j]);
            count= count + data[p].cg[j];
        }
        printf("CGPA of this semester : %.2lf\n\n",count/6);
        printf("Total CGPA : %.2lf\n\n",data[p].cgpa);
    }
}
