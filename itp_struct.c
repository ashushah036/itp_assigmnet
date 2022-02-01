#include <stdio.h>
struct entries {

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
    
struct entries entry1;
printf("enter the college code\n");
gets(entry1.college_code);

printf("enter the college name\n");
gets(entry1.college_name);

printf("enter the college year of establishement\n");
gets(entry1.college_estyear);

printf("enter the number of courses\n");
scanf("%d",&entry1.number_courses);



/*****************part 2 input******************/
int temp;
temp=entry1.number_courses;
struct course_details storing_data[temp];
for(int i=0;i<temp;i++)
{
printf("enter the course%d name\n",i+1);
getchar();
gets(storing_data[i].course_name); 

printf("enter the course%d duration in yrs\n",i+1);
scanf("%f",&storing_data[i].course_duration);

printf("enter the number of students in course%d\n",i+1);
scanf("%d",&storing_data[i].number_of_student);

}
/******************output section***************/
printf("the details of college are: \n");
printf("the college code is:");
printf("%s \n",entry1.college_code);
printf("the college name is:");
printf("%s \n",entry1.college_name);
printf("the college year of establishement is:");
printf("%s\n",entry1.college_estyear);
printf("the number of courses in the college is:");
printf("%d\n",entry1.number_courses);

printf(" \n \n  **************** \n \n The details of the courses avalilable in the college are \n \n");
for(int j=0;j<temp;j++)
{
printf("details of course no.0%d are: ",j+1);
printf("\nthe course name is:");
printf("%s",storing_data[j].course_name); 

printf("\nthe course duration is:");
printf("%0.1f",storing_data[j].course_duration);

printf("\nthe number of students are:");
printf("%d",storing_data[j].number_of_student);
printf("\n \n ");
}
    return 0;
}