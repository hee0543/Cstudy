#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int hour, minute, need;

	scanf("%d %d", &hour, &minute);
	scanf("%d", &need);
	
	hour += need / 60;
	minute += need % 60;

	if (minute >= 60) {
		hour+=minute / 60;
		minute %= 60;
	}
	else;

	if (hour >= 24) 
		hour -= 24;

	printf("%d %d", hour, minute);
	
	return 0;
}

