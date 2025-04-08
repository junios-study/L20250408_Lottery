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


void Swap(int* A, int* B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}



int main()
{
	int A = 10;
	int B = 20;
	
	Swap(&A, &B);

	cout << A << endl;
	cout << B << endl;

	return 0;
}









void Initialize()
{
	srand(time(NULL));

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
		cout << Pockets[i] << endl;
	}
}