#include <stdio.h>
#define N 5

struct PrintJob
{
    int jobId;
    char title[50];
};

struct PrintJob queue[N];
int front = -1, rear = -1;


void enqueue(int x);
void dequeue();
void display();

int main()
{
    int choice, x;

    do
    {
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.exit\n");

        printf("enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("enter job id: ");
                scanf("%d", &x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("exit program.\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}

void enqueue(int x)
{
    if(rear == N - 1)
    {
        printf("queue is full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear].jobId = x;
        printf("enter document title: ");
        scanf(" %[^\n]", queue[rear].title);
    }
    else
    {
        rear++;
        queue[rear].jobId = x;
        printf("enter document title: ");
        scanf(" %[^\n]", queue[rear].title);
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else if(front == rear)
    {
        printf("id: %d\n", queue[front].jobId);
        printf("title: %s\n", queue[front].title);
        front = rear = -1;
    }
    else
    {
        printf("id: %d\n", queue[front].jobId);
        printf("title: %s\n", queue[front].title);
        front++;
    }
}

void display()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            printf("id: %d\n", queue[i].jobId);
            printf("title: %s\n", queue[i].title);
        }
    }
}