#include <stdio.h>
#include <stdlib.h>
double averageGrade(unsigned int number_of_subjects);
void printGrade( double ave_grade );
void printName ();
int main()
{
 unsigned int subjects;
 double mean;
 printName();
 printf("Enter number of subjects. This value must be greater than ZERO.");
 printf("\nOr enter ZERO to exit this program");
 printf("\n\nsubjects= ");
 scanf("%u", &subjects);
 if(subjects == 0 )
 exit(0);
 mean = averageGrade( subjects );
 printGrade( mean );
 return 0;
}

double averageGrade(unsigned int number_of_subjects)
{
 unsigned int i, grade, sum;
 double mean_value;
 system("cls");
 printf("Enter grades for each subject. Grade must be between 60...100.");
 printf("\nTotal number of grades equals to %u\n", number_of_subjects);
 sum = 0;
for (i=1; i <= number_of_subjects; i++){
        do{
 printf("\ngrade #%u: ", i);
 scanf("%u", &grade);}
while( grade < 60 || grade > 100 );
 sum = sum + grade;

 }
 mean_value = (double)sum / (double)number_of_subjects;
 return mean_value;
}

void printGrade( double ave_grade )
{
 system("cls");
 printf("\n");
 printf("Average grade: %.3lf\n", ave_grade);
 if (60<ave_grade && ave_grade<=64)
        printf(" - Sufficient");
else
{
if (64<ave_grade && ave_grade<=74)
{
printf(" - Satisfactory ");
}
else{if (75<ave_grade && ave_grade<=84)
{
printf(" - Good");
}
else{if (85<ave_grade && ave_grade<=94)
{
printf(" - Very good");
}
else
{
printf(" -  Excellent");
}
}
}
}
}
void printName(){
char name[50]="";
printf("print students name: ");
fgets(name, 50, stdin);
printf("students name:");
puts(name);
}
