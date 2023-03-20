#ifndef BITBOARD_H
#define BITBOARD_H

// PARAMETERS
// bitboard type
using U64 = unsigned long long;

// board squares
enum Board {
    a8, b8, c8, d8, e8, f8, g8, h8,
    a7, b7, c7, d7, e7, f7, g7, h7,
    a6, b6, c6, d6, e6, f6, g6, h6,
    a5, b5, c5, d5, e5, f5, g5, h5,
    a4, b4, c4, d4, e4, f4, g4, h4,
    a3, b3, c3, d3, e3, f3, g3, h3,
    a2, b2, c2, d2, e2, f2, g2, h2,
    a1, b1, c1, d1, e1, f1, g1, h1,
};

// FUNCTIONS
// get bit
inline U64 get_bit(U64 bitboard, int square) {
    // use AND operation to get bit by shifting 1 to the 'square' position, then ANDing it with the bitboard
    return (bitboard & (1ULL << square)) ? 1 : 0;
}

// set bit
inline void set_bit(U64 &bitboard, int square) { // NEED BITBOARD REFERENCE
    // use OR operation to set bit
    bitboard |= (1ULL << square);
}

// remove bit
inline void remove_bit(U64 &bitboard, int square) { // NEED BITBOARD REFERENCE
    // we need this validator because the XOR operation TOGGLES instead of POPS
    if (get_bit(bitboard, square))
        bitboard ^= (1ULL << square);
}

// print bitboard
inline void print_bitboard(U64 bitboard) {
    printf("\n");
    // iterate over board's ranks
    for (int r = 0; r < 8; r++) {
        // iterate over board's files
        for (int f = 0; f < 8; f++) {
            int square = 8 * r + f;

            if (!f) {
                // output board's rankr
                printf("  %d ", 8 - r);
            }

            // output bitboard's square with 1 or 0 depending on the bit state
            printf(" %d", get_bit(bitboard, square));
        }
        printf("\n");
    }
    // output board's files
    printf("\n     a b c d e f g h \n\n");

    // output bitboard's decimal value
    printf("     bitboard: dec_%llu\n", bitboard);
}

#endif