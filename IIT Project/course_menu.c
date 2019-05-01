#include<stdio.h>
#include<string.h>
#include "header.h"

void course_menu(int b)
{
     int a,j,i;
     if(b==1)
     {
         printf("Enter Semester:");
            scanf("%d",&a);
            if(a==1)
                    {
                        for(i=0,j=1;i<6;i++,j++)
                        {
                            printf("%d. %s\n",j,course[i].cour_name);
                        }
                    }
            if(a==2)
                {
                    for(i=6,j=1;i<12;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                }
            if(a==3)
                {
                    for(i=12,j=1;i<18;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                }
            if(a==4)
                {
                    for(i=18,j=1;i<24;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                }
            if(a==5)
                {
                    for(i=24,j=0;i<30;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                }
            if(a==6)
                {
                    for(i=30,j=1;i<36;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                }
            if(a==7)
                {
                    for(i=36,j=1;i<37;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
                }
            if(a==8)
                {
                    for(i=37,j=1;i<42;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_name);
                    }
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
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
                case 2:
                    for(i=6,j=1;i<12;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
                case 3:
                    for(i=12,j=1;i<18;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
                case 4:
                    for(i=18,j=1;i<24;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
                case 5:
                    for(i=24,j=1;i<30;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
                case 6:
                    for(i=30,j=1;i<36;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
                case 7:
                    for(i=36,j=1;i<37;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
                case 8:
                    for(i=37,j=1;i<42;i++,j++)
                    {
                        printf("%d. %s\n",j,course[i].cour_code);
                    }
                    break;
            }
        }
        if(b==3)
        {
            course_menu2();
        }
        if(b==4)
        {
            course_menu3();
        }

}
