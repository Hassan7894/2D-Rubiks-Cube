#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include "graphics.h"
#include <stdlib.h>
#include "rubiks.h"
#include "moves.h"
#include "arrows.h"

int leftt[10] = {0};
int rightt[10] = {0};
int top[10] = {0};
int bottom[10] = {0};
int front[10] = {0};
int back[10] = {0};
int currentSide = 5;
int swapp[10] = {0};

void changeSide (void)
{
	do
	{
		printf("\n\n1. Top\n2. Bottom\n3. leftt\n4. rightt\n5. Front\n6. Back\n\nSelect a side: ");
		scanf ("%d", &currentSide);
		switch (currentSide)
		{
		case 1:
			{
				display (top, currentSide);
				break;
			}
		case 2:
			{
				display (bottom, currentSide);
				break;
			}
		case 3:
			{
				display (leftt, currentSide);
				break;
			}
		case 4:
			{
				display (rightt, currentSide);
				break;
			}
		case 5:
			{
				display (front, currentSide);
				break;
			}
		case 6:
			{
				display (back, currentSide);
				break;
			}
		default:
			{
				printf("Wrong selection. Please select one of the displayed options.");
				break;
			}
		}
	} while (currentSide != 1  && currentSide != 2  && currentSide != 3  && currentSide != 4  && currentSide != 5  && currentSide != 6);
}


int main (void)
{
	clear(top,bottom,leftt,rightt,front,back);
	int choice = 0;
	display(front, currentSide);
	
	do
	{
		printf("Which move do you wish to make? Enter 0 to change to a different side. \n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			arrow1(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 2:
			arrow2(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 3:
			arrow3(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 4:
			arrow4(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 5:
			arrow5(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 6:
			arrow6(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 7:
			arrow7(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 8:
			arrow8(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 9:
			arrow9(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 10:
			arrow10(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 11:
			arrow11(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 12:
			arrow12(top,bottom,leftt,rightt,front,back,swapp,currentSide);
			break;
		case 0:
			changeSide();
			break;
		default:
			switch (currentSide)
			{
			case 1:
				display(top, 1);
				break;
			case 2:
				display(bottom, 2);
				break;
			case 3:
				display(leftt, 3);
				break;
			case 4:
				display(rightt, 4);
				break;
			case 5:
				display(front, 5);
				break;
			case 6:
				display(back, 6);
				break;
			}
			break;
		}

	} while (1);

	return 0;
}

