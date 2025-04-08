#include <iostream>

using namespace std;

void Initialize();
void Print();
void Shuffle();

int Pockets[45] = { 0, };

void B()
{
	memset(Pockets, 0, sizeof(Pockets));
}

int main()
{
	int Pockets[45] = { 0, };
	//정수형 포인터
	int* P = Pockets;

	Initialize();
	B();
	Shuffle();
	Print();

	return 0;
}

void Initialize()
{
	for (int i = 0; i < 45; ++i)
	{
		Pockets[i] = i + 1;
	}
}



void Shuffle()
{
	for (int i = 0; i < 45 * 1000; ++i)
	{
		int First = rand() % 45;
		int Second = rand() % 45;

		int Temp = Pockets[First];
		Pockets[First] = Pockets[Second];
		Pockets[Second] = Temp;
	}

}


void Print()
{
	for (int i = 0; i < 6; ++i)
	{
		cout << Pockets[0] << endl;
	}
}