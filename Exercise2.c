/*
2. Input n strings from keyboard and sort them ascendingly.
Ex:
 _________________________________________
| Input: n = 3, strings: "one two three"  |
| Output: "one three two"                 |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex2(int n, char *str[]){
	int ind[n],i,j;
	for(i = 0;i<n;i++)
	{
			if(strcmp(str[i], "one") == 0)
				ind[i] = 1;
			else if(strcmp(str[i], "two") == 0)
				ind[i] = 2;				
			else if(strcmp(str[i], "three") == 0)
				ind[i] = 3;
			else if(strcmp(str[i], "four") == 0)
				ind[i] = 4;
			else if(strcmp(str[i], "five") == 0)
				ind[i] = 5;
			else if(strcmp(str[i], "six") == 0)
				ind[i] = 6;
			else if(strcmp(str[i], "seven") == 0)
				ind[i] = 7;
			else if(strcmp(str[i], "eight") == 0)
				ind[i] = 8;
			else if(strcmp(str[i], "nine") == 0)
				ind[i] = 9;
			else if(strcmp(str[i], "ten") == 0)
				ind[i] = 10;
			else if(strcmp(str[i], "zero") == 0)
				ind[i] = 0;
		}
	int tmp;
	char *temp;
    for(i = 0; i < n - 1; i++)
	{
        for(j = i + 1; j < n; j++)
		{
            if(ind[i] > ind[j]){
               
                tmp = ind[i];
                ind[i] = ind[j];
                ind[j] = tmp;   
               
				temp = str[i];
                str[i] = str[j];
                str[j] = temp; 				
            }
        }
    }
	for(i = 0; i < n ; i++)
	{
		printf("%s ", str[i]);
	}

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	char *str[n];
	int i;
	for(i=0; i<n; i++){
		str[i] = argv[i+2];
	}

	ex2(n, str);
		
	return 0;
}
