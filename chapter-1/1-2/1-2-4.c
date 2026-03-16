#include <stdio.h>
#define BLACK 1
#define BLACK_KING 2
#define EMPTY 0
void print_moves_black(int board[8][8])
{
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
            if (board[i][j]==BLACK||board[i][j]==BLACK_KING)
            {
                int directions[4][2] = {{1,-1},{1,1},{-1,-1},{-1,1}};
                int limit = (board[i][j]==BLACK)? 2:4;
                for (int d=0;d<limit;d++)
                {
                    int ni = i+directions[d][0];
                    int nj = j+directions[d][1];
                    if (ni>=0&&nj>=0&&ni<8&&nj<8)
                    {
                        if (board[ni][nj]==EMPTY)
                        {
                            printf("Move: (%d,%d) -> (%d,%d)\n",i,j,ni,nj);
                        }
                    }
                    int ci = i+2*directions[d][0];
                    int cj = j+2*directions[d][1];
                    if (ci>=0&&cj>=0&&ci<8&&cj<8)
                    {
                        if (board[ni][nj]<0&&board[ci][cj]==EMPTY)
                        {
                            printf("Capture: (%d,%d) -> (%d,%d)\n",i,j,ci,cj);
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    int board[8][8] = {
        {0,-1,0,-1,0,-1,0,-1},
        {-1,0,-1,0,-1,0,-1,0},
        {0,-1,0,-1,0,-1,0,-1},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0}
    };
    print_moves_black(board);

}
/*
black = 1
black king = 2
white = -1
white king = -2
empty = 0
*/