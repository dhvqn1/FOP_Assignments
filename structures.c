#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    float m1,m2,m3;
    float total, percentage;
};

int main()
{
    int i,n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for(i=0;i<n;i++)
    {
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks in first subject: ");
        scanf("%f", &s[i].m1);

        printf("Marks in second subject: ");
        scanf("%f", &s[i].m2);

        printf("Marks in third subject : ");
        scanf("%f", &s[i].m3);

        s[i].total=s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total/3;
    }

    for(i=0;i<n;i++)
    {
        printf("\nName: %s",s[i].name);
        printf("\nRoll No:: %d",s[i].roll);
        printf("\nTotal: %f",s[i].total);
        printf("\nPercentage: %f",s[i].percentage);

        if(s[i].percentage>=40)
            printf("\nResullt: Pass\n");
        else
            printf("\nResult: Fail\n");
    }
    return 0;
}