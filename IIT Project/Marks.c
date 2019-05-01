#include<stdio.h>
#include<string.h>
#include "header.h"

void marks()
{
    int n,reg,i,z;
    char r[10];
    printf("Enter:\n1 = For Searching by Roll\n2 = For Searching By Name\n3 = For Searching By Reg_no\n");
    scanf("%d",&n);
    getchar();
    if(n==1)
    {
        printf("Enter Roll Here : ");
        gets(r);
        for(i=0;i<32;i++)
        {
            z=strcmp(r,data[i].roll);
            if(z==0)
            {
                printf("Student Name : %s\nStudent Roll : %s\n\n",data[i].name,data[i].roll);
                show(i);
            }
        }
    }
    if(n==3)
    {
        scanf("%d",&reg);

    }
    if(n==2)
    {

    }

}
