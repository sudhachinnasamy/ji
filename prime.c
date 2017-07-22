#include <stdio.h>
 
int main()
{
    int i, j, start,end,count;
    int prime; 
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
 
    printf("All prime numbers between %d to %d are:\n", start, end);

    for(i=start; i<=end; i++)
    {
        
        prime = 1; 
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1)
        {
            count++;
        }
    }printf("%d",count-1);//it print the prime count;
 
    return 0;
} 
