#include <bitset>

using namespace std;

namespace Chess
{
    class Board
    {
        private:
        short *squares;
        bitset<144> LegalMoveBitSet;
        public:
        Board();
        ~Board();
        void ApplyMove();


    };
}