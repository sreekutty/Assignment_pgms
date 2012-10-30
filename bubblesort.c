//Write a program to implement bubble sort

#include<stdio.h>
main()
{
    int n,array[20],i,j,temp;
    
    printf("Enter the no of elements to be sorted:");
    scanf("%d",&n);

    printf("\nEnter elements to be sorted:");

    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("\nThe unsorted elements are:");

    for(i=1;i<=n;i++)
    {
        printf("%d\n",array[i]);
    }

    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    printf("\nSorted elements are:");

    for(i=1;i<=n;i++)
    {
        printf("%d\n",array[i]);
    }
}
