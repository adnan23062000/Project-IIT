#include "header.h"
void menu()
{
    int n;
    printf("Enter Your Choice-\nPress:-\n");
    printf("See CGPA : 1\nSee Specific Course Result : 2\nSee student Info : 3\nInput Data : 4\nEdit Data : 5\n");
    scanf("%d",&n);
    if(n==4)
    {
        structure_input();
    }
    if(n==5)
    {
        structure_output();
    }
}
