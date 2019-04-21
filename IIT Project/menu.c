#include "header.h"
#include<string.h>
void menu()
{
    int n,a,b,i;
    char x,ccode[10],cname[50];
    printf("Enter Your Choice-\nPress:-\n");
    printf("See CGPA : 1\nSee Personal Information : 2\nSee Academic Information: 3\nInput Data : 4\nSee All Data : 5\n");
    scanf("%d",&n);
    if(n==3)
    {
        course_subjects();

    }
    if(n==4)
    {
        structure_input();
        printf("Do You Want To Go Back??\nPRESS:\nYES='Y'\nNO='N'\n\n\n");
        scanf("%c",&x);
        if(x=='Y')
        {
            menu();
        }
    }
    if(n==5)
    {
        output();
        printf("Do You Want To Go Back??\nPRESS:\nYES='Y'\nNO='N'\n\n\n");
        scanf("%c",&x);
        if(x=='Y')
        {
            menu();
        }
    }
    if(n==6)
    {
        course_subjects();
        for(i=0;i<42;i++)
        {
            printf("%s=%s\n",course[i].cour_code,course[i].cour_name);
        }
    }
}
