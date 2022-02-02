#include <stdio.h>

struct college {

    char college_code [3];
    char college_name [100];
    char college_estyear [5];
    int number_courses;

};

struct course_details{

    char course_name[100];
    float course_duration;
    int number_of_student;

};

int main(){
    
    struct college entry1;
    printf("Enter college code:\n");
    gets(entry1.college_code);
    printf("\n");
    
    printf("Enter college name:\n");
    gets(entry1.college_name);
    printf("\n");

    printf("Enter establishement year of college:\n");
    gets(entry1.college_estyear);
    printf("\n");

    printf("Enter number of courses:\n");
    scanf("%d",&entry1.number_courses); 
    printf("\n");
    

/****************part 2 input*****************/
    int temp=entry1.number_courses;
    
    struct course_details storing_data[temp];
    for(int i=0;i<temp;i++)
    {
    printf("Enter course %d name:\n",i+1);
    getchar();
    gets(storing_data[i].course_name);
    printf("\n");
   
    printf("Enter course %d duration in years:\n",i+1);
   scanf("%f",&storing_data[i].course_duration);
    printf("\n");
    
    printf("Enter number of students in course %d:\n",i+1);
 scanf("%d",&storing_data[i].number_of_student);
    printf("\n");
    
    }
/****************output section***************/
    printf("\t \t \t \t \t \t \t***COLLEGE DETAILS*** \n");
    printf("\n");
    
printf("College code :");
printf("%s \n",entry1.college_code);
printf("\n");
    
printf("College name :");
printf("%s \n",entry1.college_name);
printf("\n");
    
printf("Year of establishement :");
printf("%s\n",entry1.college_estyear);
printf("\n");
    
printf("Number of courses in college :");
printf("%d\n",entry1.number_courses);
printf("\n");

printf("\t \t \t \t \t \t \t***COURSE DETAILS*** \n");
printf("\n");
    for(int j=0;j<temp;j++)
    {
printf("%d] ",j+1);
printf("\nCourse name :");
printf("%s",storing_data[j].course_name); 

printf("\nCourse duration :");
printf("%0.1f",storing_data[j].course_duration);

printf("\nNumber of students :");
printf("%d",storing_data[j].number_of_student);
    printf("\n \n ");
    }
    return 0;
}
