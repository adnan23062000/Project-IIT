#include<stdio.h>

struct student{
    char name[20];
    char address[80];
    int roll;
    int reg_no;
}data[5];


void structure_output()
{
    FILE *fp;
    char name[]="project.txt";
    fp=fopen(name,"r");
    int i;
    for(i=0;i<5;i++)
    {
        fscanf(fp,"%d %s %d",&data[i].name,&data[i].address,&data[i].roll,&data[i].reg_no);
        printf("%s %s %d %d",data[i].name,data[i].address,data[i].roll,data[i].reg_no);
    }
    fclose(fp);
}
