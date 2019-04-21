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

void menu();
void structure();
void structure_input();
void course_list();
void course_subjects();
void course_menu(int);
