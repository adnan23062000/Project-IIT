#include<stdio.h>

struct student{
    char name[20];
    char address[80];
    int roll;
    int reg_no;
}data[5];

struct course_list
{
    char cour_code[10];
    char cour_name[50];
}course[42];


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

void course_subjects()
{
    FILE *aa;

    aa=fopen("course.txt","r");
    int n;
    for(n=0;n<42;n++)
    {
        fscanf(aa,"%s",course[n].cour_code);
        fscanf(aa,"\n%[^\n]s",course[n].cour_name);
        printf("%s = %s\n",course[n].cour_code,course[n].cour_name);
    }
    fclose(aa);
}
