#include <iostream>
#include <vector>

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
	int* Temp = PA;
	PA = PB;
	PB = Temp;
}


int* Resize(int* Original, int OriginalSize, int NewSize)
{
	int* NewDynamicArray = new int[NewSize];
	for (int i = 0; i < OriginalSize; ++i)
	{
		NewDynamicArray[i] = Original[i];
	}

	delete[] Original;
	Original = nullptr;

	Original = NewDynamicArray;
	NewDynamicArray = nullptr;

	return Original;
}



int main()
{
	int A;
	inrt

	int* DynamicArray = new int[10000];

	for (int i = 0; i < 10; ++i)
	{
		DynamicArray[i] = (i + 1) * 3;
	}

	//추가 삭제 비용 적게 드는거
	//접근 빠르다. 접근에 상수 시간(vector)
	DynamicArray = Resize(DynamicArray, 10000, 10001);

	for (int i = 10; i < 20; ++i)
	{
		DynamicArray[i] = (i - 9) * 4;
	}


	for (int i = 0; i < 20; ++i)
	{
		cout << DynamicArray[i] << endl;
	}

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