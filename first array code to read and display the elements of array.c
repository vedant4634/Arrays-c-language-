
#include<stdio.h>
#include<conio.h>
void main() //program for reading and printing arrays 
{
    int i, x[4];
    printf("enter any 4 numbers:");
    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("The numbers in array are :");
      for ( i = 0; i < 4; i++)
    printf("\t%d",x[i]);
}
    
