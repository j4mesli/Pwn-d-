#include <cstdlib>
#include <iostream>
// BITBOARD HEADER FILE
#include "bitboard.h"

using namespace std;

int main() {
    // init empty bitboard
    U64 bitboard = 0ULL;

    // set bits on each parameter
    set_bit(bitboard, a8);
    set_bit(bitboard, a7);
    set_bit(bitboard, d2);
    set_bit(bitboard, h4);

    // remove bit
    remove_bit(bitboard, a8);

    // output bitboard
    print_bitboard(bitboard);

    return 0;
}