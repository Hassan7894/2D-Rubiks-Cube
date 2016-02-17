

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

void display (int side[], int currentSide, int top[], int bottom[], int leftt[], int rightt[], int front[], int back[])
{
	cleardevice();
	for (int i = 0; i <= 60; i=i+30)
	{
		for (int j = 0; j <= 60; j=j+30)
		{
			setfillstyle(1,side[(j/30) + 1 + (3*(i/30))]);
			bar(40+j+(j/10), 40+i+(i/10), 70+j+(j/10), 70+i+(i/10));
		}
	}

	setfillstyle(1, 14);
	int poly[8]={0};

	for (int i = 0; i<=66; i = i+33)
	{
		poly[0] = 30;        
		poly[1] = 45+i;
		poly[2] = 30;  
		poly[3] = 65+i;
		poly[4] = 15;
		poly[5] = 55+i;
		fillpoly(3, poly);
	}

	for (int i = 0; i<=66; i = i+33)
	{
		poly[0] = 146;        
		poly[1] = 45+i;
		poly[2] = 146;  
		poly[3] = 65+i;
		poly[4] = 161;
		poly[5] = 55+i;
		fillpoly(3, poly);
	}

	for (int i = 0; i<=66; i = i+33)
	{
		poly[1] = 146;        
		poly[0] = 45+i;
		poly[3] = 146;  
		poly[2] = 65+i;
		poly[5] = 161;
		poly[4] = 55+i;
		fillpoly(3, poly);
	}

	for (int i = 0; i<=66; i = i+33)
	{
		poly[1] = 30;        
		poly[0] = 45+i;
		poly[3] = 30;  
		poly[2] = 65+i;
		poly[5] = 15;
		poly[4] = 55+i;
		fillpoly(3, poly);
	}

	
	//						ALL SIDES VIEW

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,front[(j/10) + 1 + (3*(i/10))]);
			bar(150+j+(j/10), 220+i+(i/10), 160+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,rightt[(j/10) + 1 + (3*(i/10))]);
			bar(187+j+(j/10), 220+i+(i/10), 197+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,leftt[(j/10) + 1 + (3*(i/10))]);
			bar(113+j+(j/10), 220+i+(i/10), 123+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,back[(j/10) + 1 + (3*(i/10))]);
			bar(76+j+(j/10), 220+i+(i/10), 86+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,bottom[(j/10) + 1 + (3*(i/10))]);
			bar(150+j+(j/10), 257+i+(i/10), 160+j+(j/10), 267+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,top[(j/10) + 1 + (3*(i/10))]);
			bar(150+j+(j/10), 183+i+(i/10), 160+j+(j/10), 193+i+(i/10));
		}
	}
		

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