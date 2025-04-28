#include<stdio.h>
#include<stdlib.h>	
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	char grade = 'B';

	switch (grade) {
	case 'A': printf("Sweet! \n");
		break;
	case 'B': printf("Could have tried harder \n");
		break;
	case 'C': printf("I C you didnt study \n");
		break;
	case 'D': printf("D's dont get degrees? \n");
		break;
	case 'F':
		printf("Not a passing grade \n");
		break;
	default: printf("That doesnt even make sense! \n");

	}

	return 0;

}