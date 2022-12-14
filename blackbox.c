#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

int FNR(int Z)
{

}

int main()
{
    int B[9][9], N, R;
    printf("                        BLACKBOX\n");
    printf("                   CREATIVE COMPUTING\n");
    printf("                 MORRISTOWN, NEW JERSEY\n");
    printf("NO. OF ATOMS? ");
    scanf("%d", &N);

    for (int j = 0;j < 9;j++)
    {
        for (int i = 0;i < 9;i++)
        {
            B[i][j] = 0;
        }
    }

    for (int i = 1; i < N;i++)
    {
        int x = FNR(1);
        int y = FNR(1);
        if (B[x][y] == 0)
        {
            B[x][y] = 1;
        }
    }

    int s = 0, c = 0;
    printf("\nRAY ");
    scanf("%d", &R);

    if (R < 1)
    {

    }
    return 0; 
}
