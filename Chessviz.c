#include <stdio.h>


int main()
{
    char const K = 'K'; 
    char const F = 'F'; 
    char const S = 'S'; 
    char const H = 'H'; 
    char const L = 'L'; 
    char const P = 'P'; 

    char Pole[9][9] = {
            {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
            {'1', S, L, H, F, K, H, L, S},
            {'2', P, P, P, P, P, P, P, P},
            {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'7', P, P, P, P, P, P, P, P},
            {'8', S, L, H, K, F, H, L, S},
    };

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            printf("%c", Pole[i][j]);
        printf("\n");
    }

    return 0;
}
