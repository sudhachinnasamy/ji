#include<stdio.h>
void main()
{
    int i,j,count;
    printf("{");
     int a[4]={1,2,3,4};
     int b[4]={3,4,5,6};
     for(i=0;i<4;i++)
     {
         printf("%d,",a[i]);
     }printf("}\n");
     printf("{");
     for(i=0;i<4;i++)
     {
         printf("%d,",b[i]);
     }printf("}\n");
     
    for(i=0;i<4;i++)
   {
    for(j=0;j<4;j++)
    {
       if(a[i]==b[j])
       printf("%d  ",a[i]);
    }
   }
}
