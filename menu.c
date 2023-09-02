#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)

#define A 4.00
#define A_MINUS 3.75
#define B_PLUS 3.5 
#define B 3
#define B_MINUS 2.75
#define C_PLUS 2.5
#define C_MINUS 2
#define F 0

//menu function
int menu (void) {
    int choice;

    printf("\n\n**************************************\n");
    printf("1. Staff administrator mode \n");
    printf("2. Student mode \n");
    printf("3. Quit \n");
    printf("**************************************\n\n");
    printf("Please enter your choice (1-3) > ");
    scanf("%d", &choice);

    return choice; 
}

//administrator mode function
struct student
{
  char name[50], courseCode[8];
  int studID, currentSem ;
  double gpa, cgpa, grade, creditHours;
} ;

int main(int argc, char const *argv[])
{
    //variables declaration for menu
    int choice;
    //variables declaration for administrator mode
    struct student s;
    struct student stud[5000];
    //variables declaration for student mode

    //logo
    printf("__    ____   _____    __        ______     ________        _____         __           ____          __        _____       \n");
    printf("###   #### ,*#####*,  ##       0#######    ########       #######0,    .####.       ,######,,     .####.     #######0,    \n");
    printf("##   ###   ##     ##  ##       &0             ###         ###   '###, ,##  ##,     ###,    ###   ,##  ##,    ###   '###,  \n");
    printf("## ##     ###     ### ##       ######         ###         ###   '### ,##    ##,     '####   '   ,##    ##,   ###   '###,  \n");
    printf("## ##     ###     ### ##       ######     ,   ###         ########' ,##======##   .   '###,    ,##======##,  ########'    \n");
    printf("##   ###   ##     ##  ##       &0        ##.  ###         ###      ,##        ##, ###  '####  ,##        ##, ###    ###   \n");
    printf("###   #### '*#####*'  0######  0#######   ;0#0;'          ###     ,##          ##  .######;   ##          ## ###     ###  \n");
    
    //menu
    do
    {
      choice = menu();
      if (choice == 1)
      {
        //administrator mode
        //input
        printf("Student information:\n");    
        printf("Name: ");  
        scanf("%s", s.name);
        rewind(stdin);
        printf("Student ID: "); 
        scanf("%d", &s.studID);  
        printf("Course code: ");
        scanf("%s", s.courseCode); 
        printf("Credit hours: ");  
        scanf("%lf", &s.creditHours);     
        printf("Grade:");    
        scanf("%lf", &s.grade); 
        printf("Current Semester:");
        scanf("%d", &s.currentSem);

        //process
        
        
        //output
        printf("\n-----------------------\n");
        printf("Information display:");
        printf("\n-----------------------\n");
        printf("Name: %s\n", s.name);
        printf("Student ID: KPKL%d\n", s.studID);
        printf("Course code: %s\n", s.courseCode);
        printf("Credit hours: %.2lf\n", s.creditHours);
        printf("Grade: %.2lf\n", s.grade);
        printf("Current semester: %d\n", s.currentSem);
        // printf("CGPA: ", s.cgpa);
        // printf("GPA: ", s.gpa);
      } else if (choice == 2)
      {
        //student mode
      } 
    } while (choice != 3);
    
    return 0;
}