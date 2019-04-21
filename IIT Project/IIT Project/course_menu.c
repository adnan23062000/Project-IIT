#include<stdio.h>
#include<string.h>
#include "header.h"

void course_menu(int b)
{
     int a,j,i;
     char ccode[10],cname[50];
     if(b==1)
     {
         printf("Enter Semester:");
            scanf("%d",&a);
            switch(a)
            {
                case 1:
                    for(i=0,j=1;i<6;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                    break;
                case 2:
                    for(i=6,j=1;i<12;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                    break;
                case 3:
                    for(i=12,j=1;i<18;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_name);
                    }
                    break;
                case 4:
                    for(i=18,j=1;i<24;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_name);
                    }
                    break;
                case 5:
                    for(i=24,j=0;i<30;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_name);
                    }
                    break;
                case 6:
                    for(i=30,j=1;i<36;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_name);
                    }
                    break;
                case 7:
                    for(i=36,j=1;i<37;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_name);
                    }
                    break;
                 case 8:
                    for(i=37,j=1;i<42;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_name);
                    }
                    break;
            }

    }
     if(b==2)
        {
            printf("Enter Semester:");
            scanf("%d",&a);
            switch(a)
            {
                 case 1:
                    for(i=0,j=1;i<6;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
                 case 2:
                    for(i=6,j=1;i<12;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
                 case 3:
                    for(i=12,j=1;i<18;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
                 case 4:
                    for(i=18,j=1;i<24;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
                 case 5:
                    for(i=24,j=1;i<30;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
                 case 6:
                    for(i=30,j=1;i<36;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
                 case 7:
                    for(i=36,j=1;i<37;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
                 case 8:
                    for(i=37,j=1;i<42;i++,j++)
                    {
                        printf("%d. %s\n",course[i].cour_code);
                    }
                    break;
            }
        }
        if(b==3)
        {
            gets(ccode);
            for(i=0;i<42;i++)
            {
                a=strcmp(course[i].cour_code,ccode);
                if(a==0)
                {
                    printf("%s\n",course[i].cour_name);
                    break;
                }
            }
        }
        if(b==4)
        {
            gets(cname);
            for(i=0;i<42;i++)
            {
                a=strcmp(course[i].cour_name,cname);
                if(a==0)
                {
                    printf("%s\n",course[i].cour_code);
                    break;
                }
            }
        }

}
