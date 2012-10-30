//Write a program to implement stack

#include <stdio.h>

int stack[100];
int top=0;
int max;

main()
{
    int cases,i;

    printf("Enter the maximum size of stack:");
    scanf("%d",&max);

    do
    {
        printf("\nMain menu:\n1.Push\n2.Pop\n3.Exit\nEnter your choice: ");
        scanf("%d",&cases);

        switch(cases)
        {
            case 1:push();
                   display();
                   break;
            case 2:pop();
                   display();
                   break;
            default:printf("Invalid Choice\n\n");
                    break;
        }
    }
    while(cases!=3);

}

push()
{
    int elmnt;
    if(top>=max)
    {
        printf("\nStack is full");
        return;
    }
    else
    {   
        printf("\nEnter the stack element :  ");
        scanf("%d",&elmnt);  
        stack[top++]=elmnt;
    }
}

pop()
{
    if(top>0)
    {
        top--;
    }

}

display()
{
    int i;
    if(top<=0)
    { 
        printf("\nStack empty");
    }
    else
    {    
        printf("\n--------Stack elements--------");

        for(i=top-1;i>=0;i--)
        {   
            printf("\n%d ",stack[i]);
        }

    }
}
