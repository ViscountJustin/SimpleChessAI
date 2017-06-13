#include "Board.h"
using namespace std;

Chess::Board::Board()
{
    squares = new short[64];
}
Chess::Board::~Board()
{
    delete squares;
}

void Chess::Board::ApplyMove()
{

}
