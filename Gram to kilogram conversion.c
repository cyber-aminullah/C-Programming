/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double Gram, InitialGram, LimitGram, IncrementGram;
    double  Kilogram;
    printf("Table of Gram to Kilogram Coversion\n");
    printf("Please enter the initial gram value: ");
    scanf("%lf", &InitialGram);
     printf("Please enter the limit gram value: ");
    scanf("%lf", &LimitGram);
     printf("Please enter the increment gram value: ");
    scanf("%lf", &IncrementGram);
    printf("Gram\t\tkilogram\n");
    for(Gram=InitialGram; Gram<= LimitGram; Gram+=IncrementGram)
    {
         Kilogram=Gram/1000;
        printf("%5.0lf\t\t  %.2lf\n", Gram, Kilogram);
    }

    return 0;
}

