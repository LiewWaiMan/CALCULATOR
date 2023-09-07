#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)

//defining grade point
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
  char name[50];
  int studentID;
  double sem1Sub1CreditHour, sem1Sub2CreditHours, sem2Sub1CreditHours, sem2Sub2CreditHours, sem3Sub1CreditHours, sem3Sub2CreditHours;
  double sem1Sub1Grade, sem1Sub2Grade, sem2Sub1Grade, sem2Sub2Grade, sem3Sub1Grade, sem3Sub2Grade;
} ;

int main(int argc, char const *argv[])
{
    //variables declaration for menu
    int choice;
    //variables declaration for administrator mode
    int totalStudents;
    struct student eve = {"Evelyn Chia", 12345, 3, 4, 3, 4, 3, 4, 4.0, 3.5, 3.75, 2.5, 2.75, 3.0};
    struct student studentDB[5000] = {eve};

    //logo
    printf("__    ____   _____    __        ______     ________        _____         __           ____          __        _____       \n");
    printf("###   #### ,*#####*,  ##       0#######    ########       #######0,    .####.       ,######,,     .####.     #######0,    \n");
    printf("##   ###   ##     ##  ##       &0             ###         ###   '###, ,##  ##,     ###,    ###   ,##  ##,    ###   '###,  \n");
    printf("## ##     ###     ### ##       ######         ###         ###   '### ,##    ##,     '####   '   ,##    ##,   ###   '###,  \n");
    printf("## ##     ###     ### ##       ######     ,   ###         ########' ,##======##   .   '###,    ,##======##,  ########'    \n");
    printf("##   ###   ##     ##  ##       &0        ##.  ###         ###      ,##        ##, ###  '####  ,##        ##, ###    ###   \n");
    printf("###   #### '*#####*'  0######  0#######   ;0#0;'          ###     ,##          ##  .######;   ##          ## ###     ###  \n");
    
    do
    {
      //menu
      choice = menu();
      if (choice == 1)
      {
        int newStudentIndex;
        //administrator mode
        //calculation for total students
        totalStudents = sizeof studentDB / sizeof studentDB[0];
        //input
        for (int i = 0; i <= totalStudents; i++)
        {
          if (studentDB[i].studentID == 0)
          {
            newStudentIndex = i;
            printf("Student information:\n");    
            printf("Name: ");  
            scanf("%s", studentDB[i].name);
            rewind(stdin);
            printf("Student ID: "); 
            scanf("%d", &studentDB[i].studentID);  

            printf("\nSEMESTER 1:\n");
            printf("Credit hours: \n");
            printf("AA1003: ");  
            scanf("%lf\n", &studentDB[i].sem1Sub1CreditHour);
            printf("AA1014: "); 
            scanf("%lf\n",  &studentDB[i].sem1Sub2CreditHours);
            printf("Grade:\n");
            printf("AAA1003: ");
            scanf("%lf\n", &studentDB[i].sem1Sub1Grade);
            printf("AAA1013: ");
            scanf("%lf\n", &studentDB[i].sem1Sub2Grade);

            printf("\nSEMESTER 2:\n");
            printf("Credit hours:\n");
            printf("ABA1003: ");
            scanf("%lf\n", &studentDB[i].sem2Sub1CreditHours);
            printf("ABA1014: ");
            scanf("%lf\n", &studentDB[i].sem2Sub2CreditHours);
            printf("Grade:\n");
            printf("ABA1003: ");
            scanf("%lf\n", &studentDB[i].sem2Sub1Grade);
            printf("ABA1014: ");
            scanf("%lf\n", &studentDB[i].sem2Sub2Grade);

            printf("\nSEMESTER 3:\n");
            printf("Credit hours:\n");
            printf("ACA1003: ");
            scanf("%lf\n", &studentDB[i].sem3Sub1CreditHours);
            printf("ACA1014: ");
            scanf("%lf\n",  &studentDB[i].sem3Sub2CreditHours);
            printf("Grade:\n");
            printf("ACA1003: ");
            scanf("%lf\n",  &studentDB[i].sem3Sub1Grade);
            printf("ACA1014: ");
            scanf("%lf\n",  &studentDB[i].sem3Sub2Grade);
            break;
          }
        }

        //process
        
        
        //output
        printf("\n-----------------------\n");
        printf("Information display:");
        printf("\n-----------------------\n");
        printf("Name: %s\n", studentDB[newStudentIndex].name);
        printf("Student ID: KPKL%d\n", studentDB[newStudentIndex].studentID);

        printf("\nSEMESTER 1:\n");
        printf("Credit hours: \n");
        printf("AA1003: %.2lf\n", studentDB[newStudentIndex].sem1Sub1CreditHour);  
        printf("AA1014: %.2lf\n", studentDB[newStudentIndex].sem1Sub2CreditHours);
        printf("Grade:\n");
        printf("AAA1003: %.2lf\n",studentDB[newStudentIndex].sem1Sub1Grade);
        printf("AAA1013: %.2lf\n",studentDB[newStudentIndex].sem1Sub2Grade);

        printf("\nSEMESTER 2:\n");
        printf("Credit hours:\n");
        printf("ABA1003: %.2lf\n", studentDB[newStudentIndex].sem2Sub1CreditHours);
        printf("ABA1014: %.2lf\n", studentDB[newStudentIndex].sem2Sub2CreditHours);
        printf("Grade:\n");
        printf("ABA1003: %.2lf\n", studentDB[newStudentIndex].sem2Sub1Grade);
        printf("ABA1014: %.2lf\n", studentDB[newStudentIndex].sem2Sub2Grade);

        printf("\nSEMESTER 3:\n");
        printf("Credit hours:\n");
        printf("ACA1003: %.2lf\n", studentDB[newStudentIndex].sem3Sub1CreditHours);
        printf("ACA1014: %.2lf\n", studentDB[newStudentIndex].sem3Sub2CreditHours);
        printf("Grade:\n");
        printf("ACA1003: %.2lf\n", studentDB[newStudentIndex].sem3Sub1Grade);
        printf("ACA1014: %.2lf\n", studentDB[newStudentIndex].sem3Sub2Grade);

      } else if (choice == 2)
      {
        // empty student variable
        struct student foundStudent;
        int toFindID;
        // ask for student id
        printf("Enter student ID > ");
        scanf("%d", &toFindID);

        // for loop data in studentDB and compare with the result from scanf
        for (int i = 0; i <= totalStudents; i++)
        {
          if (studentDB[i].studentID == toFindID)
          {
            foundStudent = studentDB[i];
            printf("Found: %s\n", foundStudent.name);

            printf("\n----------------------------------------------\n");
            printf("Student's Score");
            printf("\n----------------------------------------------\n");
            printf("Name: %s\n", foundStudent.name);
            printf("Student ID: KPKL%d", foundStudent.studentID);
            printf("\n----------------------------------------------\n");
            printf("\nSEMESTER 1:\n");
            printf("Credit hours: \n");
            printf("AA1003: %.2lf\n", foundStudent.sem1Sub1CreditHour);  
            printf("AA1014: %.2lf\n", foundStudent.sem1Sub2CreditHours);
            printf("Grade:\n");
            printf("AAA1003: %.2lf\n",foundStudent.sem1Sub1Grade);
            printf("AAA1013: %.2lf\n",foundStudent.sem1Sub2Grade);

            printf("\nSEMESTER 2:\n");
            printf("Credit hours:\n");
            printf("ABA1003: %.2lf\n", foundStudent.sem2Sub1CreditHours);
            printf("ABA1014: %.2lf\n", foundStudent.sem2Sub2CreditHours);
            printf("Grade:\n");
            printf("ABA1003: %.2lf\n", foundStudent.sem2Sub1Grade);
            printf("ABA1014: %.2lf\n", foundStudent.sem2Sub2Grade);

            printf("\nSEMESTER 3:\n");
            printf("Credit hours:\n");
            printf("ACA1003: %.2lf\n", foundStudent.sem3Sub1CreditHours);
            printf("ACA1014: %.2lf\n", foundStudent.sem3Sub2CreditHours);
            printf("Grade:\n");
            printf("ACA1003: %.2lf\n", foundStudent.sem3Sub1Grade);
            printf("ACA1014: %.2lf\n", foundStudent.sem3Sub2Grade);
          
            // printf("GPA: ", );
            // printf("CGPA: ",);
            break;
          } else
          {
            printf("Invalid ID");
          }
        }
      } 
    } while (choice != 3);
abcs
    return 0;
}