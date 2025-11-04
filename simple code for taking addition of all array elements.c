// sum of elements of arrays 
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,x[7],sum=0;// i have taken 7 element
    printf("Enter any 7 numers:");
    for ( i = 0; i <7; i++)// for reading users given numbers at once thats why for loop
    {
        scanf("%d",&x[i]);
    }
    for ( i = 0; i < 7; i++)//for the calcualte sum 
    {
        sum=sum+x[i];// intilizing sum 0 then we can add arrays numbers in it with using for loop 
    }

    printf("The sum is %d",sum);

    
    
}