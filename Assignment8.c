#include <stdio.h>

int main(){

    int marks1, marks2, marks3, marks4, marks5;
    float avg;

    printf("Enter marks of the five subjects: \n");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    if (marks1 < 40 || marks2 <40 || marks3 < 40 || marks4 < 40 || marks5 < 40)
    {
        printf("Fail\n");
    } else {
        avg = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;

        if (avg > 75)
        {
            printf("Distinction\n");
        } else if (avg >= 60 && avg < 75)
        {
            printf("First Division\n");
        } else if (avg >= 50 && avg < 60)
        {
            printf("Second Division\n");
        } else if (avg >= 40 && avg < 50)
        {
            printf("Third Division\n");
        }
        
    }

    return 0;
}

    