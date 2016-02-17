

void clear (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[])
{
	for (int i = 0; i <= 9; i++)
	{
		top[i] = 1;
	}
	for (int i = 0; i <= 9; i++)
	{
		bottom[i] = 2;
	}
	for (int i = 0; i <= 9; i++)
	{
		leftt[i] = 3;
	}
	for (int i = 0; i <= 9; i++)
	{
		rightt[i] = 4;
	}
	for (int i = 0; i <= 9; i++)
	{
		front[i] = 5;
	}
	for (int i = 0; i <= 9; i++)
	{
		back[i] = 6;
	}
}

void printSide(int currentSide)
{
	switch (currentSide)
	{
	case 1:
		{
			printf("Top Side");
			break;
		}
	case 2:
		{
			printf("Bottom Side");
			break;
		}
	case 3:
		{
			printf("leftt Side");
			break;
		}
	case 4:
		{
			printf("rightt Side");
			break;
		}
	case 5:
		{
			printf("Front Side");
			break;
		}
	case 6:
		{
			printf("Back Side");
			break;
		}
	}
}

void display (int side[], int currentSide)
{
    initwindow(400, 300, "First Sample");
    circle(100, 50, 40);
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
	/*
	system("cls");
	printf("\t");
	printSide(currentSide);
	printf("\n\n\n\t^   ^   ^\n");
	printf("\t1   2   3\n");
	printf("\t|   |   |\n");
	printf("\n\n");
	for (int i = 0; i <= 6; i = i+3)
	{
		printf("<-%d-\t", 12-(i/3));
		for (int j = 1; j <= 3; j++)
		{
			printf("%d   ", side[i+j]);
		}
		printf ("\t-%d->\n\n", (i/3)+4);
	}
	printf("\n\n");
	printf("\t|   |   |\n");
	printf("\t9   8   7\n");
	printf("\tv   v   v\n\n\n\n");
	*/
}