#include <stdio.h>
int main()

 {
	int ndays, y, m, d;	
	
	printf("Input no. of days: ");
	
	scanf("%d", &ndays);
	
	y = ndays/360;
	
	ndays = ndays-(360*y);
		
	m = ndays/30;
	
	d = ndays-(m*30);
	
	printf(" Here %d Year(s) \n Here %d Month(s) \n Here %d Day(s)", y, m, d);
	return 0; 
}
