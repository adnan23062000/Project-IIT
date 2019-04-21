#include "header.h"
void output()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%s %s %d %d\n",data[i].name,data[i].address,data[i].roll,data[i].reg_no);
    }
}
