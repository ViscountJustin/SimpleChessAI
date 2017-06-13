#include <iostream>
#include <bitset>
#include "Board.h"

using namespace std;
using namespace Chess;

void PrintBitBoard(bitset<144> board);
void GetUserMove(char *inA, char *inN, char *outA, char *outN);
void GetBestAIMove(char *inA, char *inN, char *outA, char *outN);
void ApplyMoveToBoard(char *inA, char *inN, char *outA, char *outN);



int main()
{
    Board *board = new Board();
    string legalMoveString =   "111111111111" 
                               "111111111111" 
                               "110000000011" 
                               "110000000011" 
                               "110000000011" 
                               "110000000011" 
                               "110000000011" 
                               "110000000011" 
                               "110000000011" 
                               "110000000011" 
                               "111111111111" 
                               "111111111111";
     
    string moveString =   "000000000000" 
                          "000000000000" 
                          "000000000000" 
                          "000000000000" 
                          "000000000000" 
                          "000000000000" 
                          "000000000000" 
                          "000000100000" 
                          "000000000000" 
                          "000000000000" 
                          "000000000000" 
                          "000000000000"    ;
    
    
    bitset<144> moveBoard(moveString);
    bitset<144> legalMoveBoard(legalMoveString);
    
    PrintBitBoard(legalMoveBoard & moveBoard);
}

void GetUserMove(char *inA, char *inN, char *outA, char *outN)
{
    string s;
    cout << "Move from (B5): ";
    cin >> s;
    cout << "Move to: (D5)";
    cin >> s;

}

void GetBestAIMove(char *inA, char *inN, char *outA, char *outN)
{

}

void ApplyMoveToBoard(char *inA, char *inN, char *outA, char *outN)
{

}


void PrintBitBoard(bitset<144> board)
{
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cout << board[j + i*12];
        }
        cout << "\n";
    }
}