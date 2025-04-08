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


void Swap(int* PA, int* PB)
{
	int Temp = *PA;
	*PA = *PB;
	*PB = Temp;
}

void Swap2(int* PA, int* PB)
{
	int *Temp = PA;
	PA = PB;
	PB = Temp;
}


void Test(int* A, int Size)
{
	for (int i = 0; i < Size; ++i)
	{
		cout << *(A+i) << endl;
		cout << A[i] << endl;
	}
}

int* LoadTexture(int Value)
{
	return new int[Value];
}

int main()
{
	
	for (int i = 0; i < 1000; ++i)
	{
		delete[] LoadTexture(100000000);
	}

	int Size = 10;

	//Heap 지워지지 내맘대로 할수 있다.
	//생성, 삭제 조정 할수 있다.
	int* PA = new int[Size];
	int* PA2 = PA;
	for (int i = 0; i < Size; ++i)
	{
		PA2[i] = i;
	}
	//*(PA+0) 
	delete[] PA2;
	PA2 = nullptr;
	  

	//dangling pointer
	//if (PA == nullptr)
	if (PA)
	{
		cout << PA[1] << endl;
	}

	int* PB = new int;
	delete PB;


	//cout << A[2] << endl;
	//cout << *(A + 2 ) << endl;


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