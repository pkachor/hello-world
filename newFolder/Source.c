#include<stdio.h>
#include<Windows.h>
#define FALSE 0
#define TRUE 1
main()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, FOREGROUND_GREEN);
	char symbol;
	int count = 0, i = 0;
	int state = FALSE;
	int lengthAndCount[20][20];
	for (int j = 0; j < 20; j++)
	{
		for (int k = 0; k < 20; k++)
		{
			lengthAndCount[j][k] = '\0';
		}
		
	}
	while ((symbol = getchar()) != EOF)
	{
		count++;
		
		if (symbol == ' ' || symbol == '\t' || symbol == '\n')
		{
			state = FALSE;
			for (int j = 0; j < count - 1; j++)
			{
				lengthAndCount[j][i] = 1;
				
			}
			count = 0;
			i++;
		}
		else if (state == FALSE)
			state = TRUE;
	}
	
	for (int j = 0; j < 20; j++)
	{
		for (int k = 0; k < 20; k++)
		{
			printf("%c ", lengthAndCount[ 19 - j][k]);
		}
		printf("\n");
	}
	

	system("pause");
}