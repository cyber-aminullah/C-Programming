#include<stdio.h>
int main()
{
    int ndays,d,m,y;
    printf("please enter total days:\n");
    scanf("%d",&ndays);
    y=ndays/360;
    ndays=ndays-(360*y);
    m=ndays/30;
    d=ndays-(m*30);
    printf("Year :%d years\n",y);
    printf("Year :%d months\n",m);
    printf("Year :%d days\n",d);
}