/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex1(int testcase){
int dau,hai,ba,bon;
	dau = testcase/1000;
	hai = (testcase-dau*1000)/100;
	ba = (testcase-dau*1000-hai*100)/10;
	bon = testcase-dau*1000-hai*100-ba*10;
	switch (dau){
        case 1:
			printf("one thousand ");
			break;
		case 2:
			printf("two thousand ");
			break;
		case 3:
			printf("three thousand ");
			break;
		case 4:
			printf("four thousand ");
			break;
		case 5:
			printf("five thousand ");
			break;
		case 6:
			printf("six thousand ");
			break;
		case 7:
			printf("seven thousand ");
			break;
		case 8:
			printf("eight thousand ");
			break;
		case 9:
			printf("nine thousand ");
			break;
	}
	switch (hai){
		case 1:
			printf("one hundred ");
			break;
		case 2:
			printf("two hundred ");
			break;
		case 3:
			printf("three hundred ");
			break;
		case 4:
			printf("four hundred ");
			break;
		case 5:
			printf("five hundred ");
			break;
		case 6:
			printf("six hundred ");
			break;
		case 7:
			printf("seven hundred ");
			break;
		case 8:
			printf("eight hundred ");
			break;
		case 9:
			printf("nine hundred ");
			break;
	}
	switch (ba){
		case 0:
			printf("and ");
			break;
		case 2:
			printf("twenty ");
			break;
		case 3:
			printf("thirty ");
			break;
		case 4:
			printf("forty ");
			break;
		case 5:
			printf("fifty ");
			break;
		case 6:
			printf("sixty ");
			break;
		case 7:
			printf("seventy ");
			break;
		case 8:
			printf("eighty ");
			break;
		case 9:
			printf("ninety ");
			break;
	}
	
	switch (bon){
		case 1:
			if(bon == 1)
				printf("eleven");
			else
				printf("one");
			break;
		case 2:
			if(bon == 1)
				printf("twelve");
			else
				printf("two");
			break;
		case 3:
			if(bon == 1)
				printf("thirteen");
			else
				printf("three");
			break;
		case 4:
			if(bon == 1)
				printf("fourteen");
			else
				printf("four");
			break;
		case 5:
			if(bon == 1)
				printf("fifteen");
			else
				printf("five");
			break;
		case 6:
			if(bon == 1)
				printf("sixtenn");
			else
				printf("six");
			break;
		case 7:
			if(bon == 1)
				printf("seventeen");
			else
				printf("seven");
			break;
		case 8:
			if(bon == 1)
				printf("eighteen");
			else
				printf("eight");
			break;
		case 9:
			if(bon == 1)
				printf("nineteen");
			else
				printf("nine");
			break;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int testcase = atoi(argv[1]);
	
	ex1(testcase);
		
	return 0;
}
