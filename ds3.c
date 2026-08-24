#include <stdio.h>
#define MAX 100

struct Student
{
    int prn;
    float marks;
    char name[40];
};

void student_input(struct Student s[], int n);
void student_display(struct Student s[], int n);
int linear_search(struct Student s[], int n, int key);
int binary_search(struct Student s[], int n, int key);
void insertion_sort(struct Student s[], int n);
void selection_sort(struct Student s[], int n);
void shell_sort(struct Student s[], int n);

int main()
{
    struct Student s[MAX];
    int choice, n, key, result;

    printf("Enter number of students: ");
    scanf("%d", &n);

    student_input(s, n);

    printf("Student Records:\n");
    student_display(s, n);

    printf("1. Linear Search\n");
    printf("2. Insertion Sort\n");
    printf("3. Selection Sort\n");
    printf("4. Shell Sort\n");
    printf("5. Binary Search\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter PRN to search: ");
            scanf("%d", &key);

            result = linear_search(s, n, key);

            if(result != -1)
            {       
                printf("Student found\n");
                printf("PRN: %d\n", s[result].prn);
                printf("Name: %s\n", s[result].name);
                printf("Marks: %.2f\n", s[result].marks);
            }
            else
            {
                printf("\nStudent not found\n");
            }
            break;

        case 2:
            insertion_sort(s, n);

            printf("Insertion Sort:\n");
            student_display(s, n);
            break;

        case 3:
            selection_sort(s, n);
            printf("Selection Sort:\n");
            student_display(s, n);
            break;

        case 4:
            shell_sort(s, n);
            printf("Shell Sort:\n");
            student_display(s, n);
            break;

        case 5:
            printf("Binary Search requires sorted records.\n");
            insertion_sort(s, n);
            printf("Sorted Student Records:\n");
            student_display(s, n);

            printf("Enter PRN to search: ");
            scanf("%d", &key);

            result = binary_search(s, n, key);
            if(result != -1)
            {
                printf("Student found\n");
                printf("PRN: %d\n", s[result].prn);
                printf("Name: %s\n", s[result].name);
                printf("Marks: %.2f\n", s[result].marks);
                }
            else
            {
                printf("Student not found\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}


void student_input(struct Student s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter details of student %d\n", i + 1);

        printf("Enter student PRN: ");
        scanf("%d", &s[i].prn);

        printf("Enter student name: ");
        scanf("%s", s[i].name);

        printf("Enter student marks: ");
        scanf("%f", &s[i].marks);
    }
}


void student_display(struct Student s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("PRN: %d", s[i].prn);
        printf("Name: %s", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}


int linear_search(struct Student s[], int n, int key)
{
    int i = 0;

    while(i < n)
    {
        if(s[i].prn == key)
        {
            return i;
        }

        i++;
    }

    return -1;
}


int binary_search(struct Student s[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(s[mid].prn == key)
        {
            return mid;
        }
        else if(key < s[mid].prn)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}


void insertion_sort(struct Student s[], int n)
{
    int i, j;
    struct Student x;

    for(i = 1; i < n; i++)
    {
        x = s[i];
        j = i - 1;

        while(j >= 0 && s[j].prn > x.prn)
        {
            s[j + 1] = s[j];
            j--;
        }

        s[j + 1] = x;
    }
}


void selection_sort(struct Student s[], int n)
{
    int i, j, min;
    struct Student temp;

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(s[j].prn < s[min].prn)
            {
                min = j;
            }
        }

        if(min != i)
        {
            temp = s[i];
            s[i] = s[min];
            s[min] = temp;
        }
    }
}


void shell_sort(struct Student s[], int n)
{
    int gap, i, swapped;
    struct Student temp;

    gap = n / 2;

    do
    {
        swapped = 0;

        for(i = 0; i < n - gap; i++)
        {
            if(s[i].prn > s[i + gap].prn)
            {
                temp = s[i];
                s[i] = s[i + gap];
                s[i + gap] = temp;

                swapped = 1;
            }
        }

        while(swapped == 1);

        gap = gap / 2;

    } while(gap >= 1);
}