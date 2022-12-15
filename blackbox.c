#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

int FNR(int Z)
{
    (int)(8 * rand(1) + 1);
}

int main()
{
    int B[9][9] = 
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    };
    int N, R;
    printf("                        BLACKBOX\n");
    printf("                   CREATIVE COMPUTING\n");
    printf("                 MORRISTOWN, NEW JERSEY\n");
n150:
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
        n180:
        int x = FNR(1);
        int y = FNR(1);
        if (B[x][y] == 0)
        {
            goto n180;
        }
        B[x][y] = 1;
    }

    int s = 0, c = 0;

n210:
    printf("\nRAY ");
    scanf("%d", &R);

    if (R < 1)
    {
        goto n480;
    }

n240:

n250:

n260:

n270:

n280:

n310:

n330:

n340:

n350:

n360:

n380:

n400:

n420:

n430:

n440:

n450:

n460:

n480:

n540:

n580:

    return 0; 
}
