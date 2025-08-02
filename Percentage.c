#include <stdio.h>
int main(){
    float percentage;
    int marks_obtained;
    const int Total_marks=100;
    printf("Enter the percentage of the student");
    scanf("%d",&marks_obtained);
    percentage=(marks_obtained);
    if (percentage>=90&&percentage<100)
    {
        printf(" Student Obtained Grade A");
    }
    else if (percentage>=80&&percentage<90)
    {
        printf("Grade B");
    }
    else if (percentage>=70&&percentage<80)
    {
        printf("Grade C");
    }
    else if (percentage>=60&&percentage<70)
    {
        printf("Grade D");
    }
    
    
    
    

    
    





}