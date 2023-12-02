#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};

int main()
{
struct library l[100];
char ar_nm[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;

while(j!=7)
{
printf("\nWelcome to AIU library Management System\n");
printf("1. Add book information\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{

case 1:

printf ("Enter book name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[i].author);

printf ("Enter pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter price in RM = ");
scanf ("%f",&l[i].price);
keepcount++;

break;
case 2:
printf("You have entered the following information:\n");
for(i=0; i<keepcount; i++)
{
printf ("book name = %s",l[i].bk_name);

printf ("\t author name = %s",l[i].author);

printf ("\t  pages = %d",l[i].pages);

printf ("\t  price = %.2f RM\n",l[i].price);
}
break;

case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
printf ("book name = %s \t author name =  %s \t pages = %d \t price = %.2f RM\n\n",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)
printf ("book name = %s \t author name =  %s \t pages = %d \t price = %.2f RM\n\n",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 5:
printf("Number of books in library : %d\n", keepcount);
break;
case 6:
exit (0);

}
}
return 0;

}
