#include <cstdlib>
#include <iostream>
// BITBOARD HEADER FILE
#include "bitboard.h"

using namespace std;

// output board
void print_bitboard(U64 bitboard) {
    // iterate over board's ranks
    for (int i = 0; i < 8; i++) {
        // iterate over board's files
        for (int j = 0; j < 8; j++) {
            int square = 8 * i + j;
            // output bitboard's square with 1 or 0 depending on the bit being available or not
            cout << " " << ((bitboard & (1ULL << square)) ? 1 : 0) << " ";
        }
        cout << endl;
    }
}

int main() {
    // init bitboard
    //// changing the nULL with whatever number for 'n' will output the one at a diff spot
    // 1 2 4 8 16 32 64 128 FOR COLUMNS, TRY BELOW
    U64 bitboard = 4ULL;
    print_bitboard(bitboard);

    return 0;
}