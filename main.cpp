#include <iostream>
#include <windows.h>

using namespace std;


void GotoXY(int X, int Y)
{
    COORD Cur;
    Cur.X = X;
    Cur.Y = Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

//custom ÀÚ·áÇü
struct PlayerInfo
{
    int X; 
    int Y;
    string Shape;
};



int main()
{
    PlayerInfo* PlayerData;
    PlayerData = new PlayerInfo;

///    (*(PlayerData+0)).X = 5;
    PlayerData->X = 5;
    PlayerData->Y = 5;
    PlayerData->Shape = "P";

    GotoXY(PlayerData->X, PlayerData->Y);

    cout << PlayerData->Shape << endl;

    delete PlayerData;
    PlayerData = nullptr;

}