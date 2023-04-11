#include "main.h"
/**
*print_chessboard - prints a chess board
*@a: not sure the use
*Return: pass
*/
void print_chessboard(char (*a)[8])
{
int i;
int j;
char chess[8][8] = {
{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
(*a)[j] = chess[i][j];
}
(*a)++;
}
}
