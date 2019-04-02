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

    fp=fopen("project.txt","r");
    int i;
    for(i=0;i<5;i++)
    {
        fgets(data[i].name,20,fp);
        fgets(data[i].address,40,fp);
        fscanf(fp,"%d %d ",&data[i].roll,&data[i].reg_no);
        printf("\n%s\n %s\n %d\n %d\n",data[i].name,data[i].address,data[i].roll,data[i].reg_no);
    }
    fclose(fp);
}
