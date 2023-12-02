#include<stdio.h>
#include<stdbool.h>
#define MaxStudents 100
int midterm[MaxStudents], final[MaxStudents];
int NumStudents ;     /* actual no of students */
int i, Smidterm, Sfinal;
bool done;
done=false;
NumStudents=0;
while (!done) {
    printf("enter mid term and final");
	scanf("%d%d", &Smidterm, &Sfinal);
	if (Smidterm != -1 || NumStudents > MaxStudents) {
		done = true;
	} else {
		midterm[NumStudents] = Smidterm;
		final[NumStudents] = Sfinal;
		NumStudents++;
	}
}
