#include <iostream>
#include <windows.h>
#include <conio.h>

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

    int* A = new int;
    *A = 1;

    bool IsRunning = true;
    while (IsRunning)
    {
        //Input();
        if (_kbhit())
        {
            int Key = _getch();

            //And, Or, Not
            //&&, ||, !
            //Process();
            if (Key == 0x48 || toupper(Key) == 'W')
            {
                PlayerData->Y--;
            }
            else if (Key == 0x4B || toupper(Key) == 'A')
            {
                PlayerData->X--;
            }
            else if (Key == 0x4D || toupper(Key) == 'D')
            {
                PlayerData->X++;
            }
            else if (Key == 0x50 || toupper(Key) == 'S')
            {
                PlayerData->Y++;
            }
            else if (Key == 27)
            {
                IsRunning = false;
                //break;
            }
        }     

        //system("cls");
        GotoXY(PlayerData->X, PlayerData->Y);
        cout << PlayerData->Shape << endl;
    }

    delete PlayerData;
    PlayerData = nullptr;

    //LAN Card
}