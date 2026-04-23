#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    int score;
};

int main()
{
    struct student s[20], temp;
    int i, j, n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i].rollno);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].score);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j].score < s[j+1].score)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    printf("The Merit List is :\n");

    for(i=0;i<n;i++)
        printf("%d %s %d\n", s[i].rollno, s[i].name, s[i].score);

    return 0;
}
