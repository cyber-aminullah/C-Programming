#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
   int a[8]={15,50,20,5,2,42,67,17};
   bool found = true;
   printf("which number you want to find?");
   scanf("%d",&num);
   for(int i=0;i<8;i++)
   {
       if(a[i]==num)
       printf("the number %d is at index of %d\n",num,i);
   }
   if(!found)
   printf("The number not found");
   

    return 0;
}