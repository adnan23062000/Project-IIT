#include"header.h"
#include<string.h>
#include<stdio.h>
void menu()
{
    int n,b,i;
    char x,ccode[10],cname[50];
    printf("Enter Your Choice-\nPress:-\n");
    printf("See Marks : 1\nSee Personal Information : 2\nSee Academic Information: 3\nInput Data : 4\nSee All Data : 5\n");
    scanf("%d",&n);
    if(n==1)
    {
        marks();
        printf("Do You Want To Go Back??\nPRESS:\nYES='y'\nNO='n'\n\n\n");
        getchar();
        scanf("%c",&x);
        getchar();
        if(x=='y')
        {
            menu();
        }
    }
    if(n==2)
    {
        store_marks();
        printf("Do You Want To Go Back??\nPRESS:\nYES='y'\nNO='n'\n\n\n");
        getchar();
        scanf("%c",&x);
        getchar();
        if(x=='y')
        {
            menu();
        }
    }
    if(n==3)
    {
        course_subjects();
        printf("Enter Your Choice:\n(1)=See Course Name List\n(2)=See Course Code List\n(3)=See Course name\n(4)=See Course Code\n");
        scanf("%d",&b);
        course_menu(b);
    }
    if(n==4)
    {
        structure_input();
        printf("Do You Want To Go Back??\nPRESS:\nYES='y'\nNO='n'\n\n\n");
        scanf("%c",&x);
        getchar();
        if(x=='y')
        {
            menu();
        }
    }
    if(n==5)
    {
        output();
        printf("Do You Want To Go Back??\nPRESS:\nYES='y'\nNO='n'\n\n\n");
        scanf("%c",&x);
        getchar();
        if(x=='y')
        {
            menu();
        }
    }
    if(n==6)
    {
        cg();
        printf("Do You Want To Go Back??\nPRESS:\nYES='y'\nNO='n'\n\n\n");
        getchar();
        scanf("%c",&x);
        getchar();
        if(x=='y')
        {
            menu();
        }
    }

}
