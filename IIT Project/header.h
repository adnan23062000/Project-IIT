struct student{
    char name[30];
    char address[80];
    char roll[12];
    int reg_no;
    int y1[42];
    int y2[24];
    int y3[36];
    int y4[42];
    double cg[12];
    double cgpa;
}data[32];

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
void course_menu2();
void course_menu3();
void output();
void marks();
void store_marks();
void cg();
int show(int p);
void arr();
void grade(int n);
