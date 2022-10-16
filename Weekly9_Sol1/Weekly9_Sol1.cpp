#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()						//Problem 110, Solution 1, ID Student 65010902
{
	int person;
	int card = 0;
	printf("Enter number of person: ");
	scanf("%d", &person);

	for (int i = 1; i <= person; i++)		// count each person
	{
		card += person - 1;		// each person give everyone except himself
	}

	printf("The number of card is: %d", card);
	return 0;
}