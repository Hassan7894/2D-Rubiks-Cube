void clockwise (int side[])
{
	for (int i = 1; i <= 2; i++)
	{
		int swapp = side[1];
		side[1] = side[4];
		side[4] = side[7];
		side[7] = side[8];
		side[8] = side[9];
		side[9] = side[6];
		side[6] = side[3];
		side[3] = side[2];
		side[2] = swapp;
	}
}

void anticlockwise (int side[])
{
	for (int i = 1; i <= 2; i++)
	{
		int swapp = side[1];
		side[1] = side[2];
		side[2] = side[3];
		side[3] = side[6];
		side[6] = side[9];
		side[9] = side[8];
		side[8] = side[7];
		side[7] = side[4];
		side[4] = swapp;
	}
}

void move1 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 1;
	int second = 4;
	int third = 7;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = bottom[first];
	front[second] = bottom[second];
	front[third] = bottom[third];
	bottom[first] = back[third+2];
	bottom[second] = back[second+2];
	bottom[third] = back[first+2];
	back[third+2] = top[first];
	back[second+2] = top[second];
	back[first+2] = top[third];
	top[first] = swapp[1];
	top[second] = swapp[2];
	top[third] = swapp[3];

	anticlockwise (leftt);
}

void move2 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 2;
	int second = 5;
	int third = 8;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = bottom[first];
	front[second] = bottom[second];
	front[third] = bottom[third];
	bottom[first] = back[third];
	bottom[second] = back[second];
	bottom[third] = back[first];
	back[third] = top[first];
	back[second] = top[second];
	back[first] = top[third];
	top[first] = swapp[1];
	top[second] = swapp[2];
	top[third] = swapp[3];
}

void move3 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 3;
	int second = 6;
	int third = 9;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = bottom[first];
	front[second] = bottom[second];
	front[third] = bottom[third];
	bottom[first] = back[third-2];
	bottom[second] = back[second-2];
	bottom[third] = back[first-2];
	back[third-2] = top[first];
	back[second-2] = top[second];
	back[first-2] = top[third];
	top[first] = swapp[1];
	top[second] = swapp[2];
	top[third] = swapp[3];

	clockwise (rightt);
}

void move4 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 1;
	int second = 2;
	int third = 3;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = leftt[first];
	front[second] = leftt[second];
	front[third] = leftt[third];
	leftt[first] = back[first];
	leftt[second] = back[second];
	leftt[third] = back[third];
	back[first] = rightt[first];
	back[second] = rightt[second];
	back[third] = rightt[third];
	rightt[first] = swapp[1];
	rightt[second] = swapp[2];
	rightt[third] = swapp[3];

	anticlockwise(top);
}

void move5 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 4;
	int second = 5;
	int third = 6;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = leftt[first];
	front[second] = leftt[second];
	front[third] = leftt[third];
	leftt[first] = back[first];
	leftt[second] = back[second];
	leftt[third] = back[third];
	back[first] = rightt[first];
	back[second] = rightt[second];
	back[third] = rightt[third];
	rightt[first] = swapp[1];
	rightt[second] = swapp[2];
	rightt[third] = swapp[3];
}

void move6 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 7;
	int second = 8;
	int third = 9;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = leftt[first];
	front[second] = leftt[second];
	front[third] = leftt[third];
	leftt[first] = back[first];
	leftt[second] = back[second];
	leftt[third] = back[third];
	back[first] = rightt[first];
	back[second] = rightt[second];
	back[third] = rightt[third];
	rightt[first] = swapp[1];
	rightt[second] = swapp[2];
	rightt[third] = swapp[3];

	clockwise(bottom);
}

void move7 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 3;
	int second = 6;
	int third = 9;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = top[first];
	front[second] = top[second];
	front[third] = top[third];
	top[first] = back[third-2];
	top[second] = back[second-2];
	top[third] = back[first-2];
	back[third-2] = bottom[first];
	back[second-2] = bottom[second];
	back[first-2] = bottom[third];
	bottom[first] = swapp[1];
	bottom[second] = swapp[2];
	bottom[third] = swapp[3];

	anticlockwise (rightt);
}


void move8 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 2;
	int second = 5;
	int third = 8;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = top[first];
	front[second] = top[second];
	front[third] = top[third];
	top[first] = back[third];
	top[second] = back[second];
	top[third] = back[first];
	back[third] = bottom[first];
	back[second] = bottom[second];
	back[first] = bottom[third];
	bottom[first] = swapp[1];
	bottom[second] = swapp[2];
	bottom[third] = swapp[3];
}

void move9 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 1;
	int second = 4;
	int third = 7;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = top[first];
	front[second] = top[second];
	front[third] = top[third];
	top[first] = back[third+2];
	top[second] = back[second+2];
	top[third] = back[first+2];
	back[third+2] = bottom[first];
	back[second+2] = bottom[second];
	back[first+2] = bottom[third];
	bottom[first] = swapp[1];
	bottom[second] = swapp[2];
	bottom[third] = swapp[3];

	clockwise (leftt);
}

void move10 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 7;
	int second = 8;
	int third = 9;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = rightt[first];
	front[second] = rightt[second];
	front[third] = rightt[third];
	rightt[first] = back[first];
	rightt[second] = back[second];
	rightt[third] = back[third];
	back[first] = leftt[first];
	back[second] = leftt[second];
	back[third] = leftt[third];
	leftt[first] = swapp[1];
	leftt[second] = swapp[2];
	leftt[third] = swapp[3];

	anticlockwise(bottom);
}

void move11 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 4;
	int second = 5;
	int third = 6;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = rightt[first];
	front[second] = rightt[second];
	front[third] = rightt[third];
	rightt[first] = back[first];
	rightt[second] = back[second];
	rightt[third] = back[third];
	back[first] = leftt[first];
	back[second] = leftt[second];
	back[third] = leftt[third];
	leftt[first] = swapp[1];
	leftt[second] = swapp[2];
	leftt[third] = swapp[3];
}

void move12 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	int first = 1;
	int second = 2;
	int third = 3;
	swapp[1] = front[first];
	swapp[2] = front[second];
	swapp[3] = front[third];
	front[first] = rightt[first];
	front[second] = rightt[second];
	front[third] = rightt[third];
	rightt[first] = back[first];
	rightt[second] = back[second];
	rightt[third] = back[third];
	back[first] = leftt[first];
	back[second] = leftt[second];
	back[third] = leftt[third];
	leftt[first] = swapp[1];
	leftt[second] = swapp[2];
	leftt[third] = swapp[3];

	clockwise(top);
}

void move13 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	swapp[1] = leftt[1];
	swapp[2] = leftt[4];
	swapp[3] = leftt[7];
	leftt[1] = bottom[7];
	leftt[4] = bottom[8];
	leftt[7] = bottom[9];
	bottom[7] = rightt[9];
	bottom[8] = rightt[6];
	bottom[9] = rightt[3];
	rightt[3] = top[1];
	rightt[6] = top[2];
	rightt[9] = top[3];
	top[1] = swapp[3];
	top[2] = swapp[2];
	top[3] = swapp[1];

	anticlockwise(back);
}

void move14 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	swapp[1] = leftt[2];
	swapp[2] = leftt[5];
	swapp[3] = leftt[8];
	leftt[2] = bottom[4];
	leftt[5] = bottom[5];
	leftt[8] = bottom[6];
	bottom[6] = rightt[2];
	bottom[5] = rightt[5];
	bottom[4] = rightt[8];
	rightt[2] = top[4];
	rightt[5] = top[5];
	rightt[8] = top[6];
	top[4] = swapp[3];
	top[5] = swapp[2];
	top[6] = swapp[1];
}

void move15 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	swapp[1] = leftt[3];
	swapp[2] = leftt[6];
	swapp[3] = leftt[9];
	leftt[3] = bottom[1];
	leftt[6] = bottom[2];
	leftt[9] = bottom[3];
	bottom[1] = rightt[7];
	bottom[2] = rightt[4];
	bottom[3] = rightt[1];
	rightt[1] = top[7];
	rightt[4] = top[8];
	rightt[7] = top[9];
	top[7] = swapp[3];
	top[8] = swapp[2];
	top[9] = swapp[1];

	clockwise(front);
}

void move16 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	swapp[1] = leftt[3];
	swapp[2] = leftt[6];
	swapp[3] = leftt[9];
	leftt[3] = top[9];
	leftt[6] = top[8];
	leftt[9] = top[7];
	top[7] = rightt[1];
	top[8] = rightt[4];
	top[9] = rightt[7];
	rightt[1] = bottom[3];
	rightt[4] = bottom[2];
	rightt[7] = bottom[1];
	bottom[1] = swapp[1];
	bottom[2] = swapp[2];
	bottom[3] = swapp[3];

	anticlockwise(front);
}

void move17(int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	swapp[1] = leftt[2];
	swapp[2] = leftt[5];
	swapp[3] = leftt[8];
	leftt[2] = top[6];
	leftt[5] = top[5];
	leftt[8] = top[4];
	top[4] = rightt[2];
	top[5] = rightt[5];
	top[6] = rightt[8];
	rightt[2] = bottom[6];
	rightt[5] = bottom[5];
	rightt[8] = bottom[4];
	bottom[4] = swapp[1];
	bottom[5] = swapp[2];
	bottom[6] = swapp[3];
}

void move18 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[])
{
	swapp[1] = leftt[1];
	swapp[2] = leftt[4];
	swapp[3] = leftt[7];
	leftt[1] = top[3];
	leftt[4] = top[2];
	leftt[7] = top[1];
	top[1] = rightt[3];
	top[2] = rightt[6];
	top[3] = rightt[9];
	rightt[3] = bottom[9];
	rightt[6] = bottom[8];
	rightt[9] = bottom[7];
	bottom[7] = swapp[1];
	bottom[8] = swapp[2];
	bottom[9] = swapp[3];

	clockwise(back);
}