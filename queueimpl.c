//Write a program to implement queue

# include<stdio.h>
# define MAX 5

int queue[100];
int end = -1;
int front = -1;
int max;

main()
{
    int cases;

    printf("Enter the maximum size of the queue:");
    scanf("%d",&max);

    do
    {   
        printf("\nMain menu:\n1.Insert\n2.Delete\n3.Display\nEnter your operation: ");
        scanf("%d",&cases);

        switch(cases)
        {
            case 1:insert();
                    break;
            case 2:del();
                    break;
            case 3:display();
                   break;
            default:printf("Wrong choice\n");
                    break;
        }
    }
    while(cases!=4);
}

insert()
{
    int elmnt;
    if (end>=max)
        printf("Queue is full\n");
    else
    {
        if (front==-1) 
            front=0;
        printf("Input the element in queue : ");
        scanf("%d", &elmnt);
        end=end+1;
        queue[end] = elmnt;
    }
}

del()
{
    if (front == -1 || front > end)
    {
        printf("Queue is empty \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front=front+1;
    }
}

display()
{
    int i;
    if (front == -1)
    {    
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is :\n");
        for(i=front;i<=end;i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}
