//code for counting the even odd numbers and their sum of array elements
//beigner code wirrting by vedant chougale
//04/11/2025

#include<stdio.h>
#include<conio.h>
void main()
{
    int x[10],sum=0,add=0,i,e=0,o=0,avg1,avg2;//e=even,o=odd, sum for the sum of even no and add is for odd numbers
    printf("Enter ant 10 numbers:");
    for ( i = 0; i < 10; i++)//
    {
       scanf("%d",&x[i]);
    }
    for ( i = 0; i <10; i++)
    {
      if (x[i]%2==0)//if for cheaking even or odd numbers
      {
        sum=sum+x[i];// to calculate sum of even numbers
        e++;//to count even numbers

      }
      else
      {
        add=add+x[i];
        o++;
      }
    }
 
    printf("\nthe even numbers between this count is %d]",e);
    printf("\ntheir addtion is %d and their average is %d",sum,sum/e);
    printf("\nthe odd numbers between this count is %d ",o);
    printf("their addtion is %d and their average is %d ",add,add/o);

}
