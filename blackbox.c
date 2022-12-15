#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

int FNR(int Z)
{
    Z = (8 * rnd(1) + 1);
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
    
    int N, R, x, y;
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
        x = FNR(1);
        y = FNR(1);
        if (B[x][y] != 0) goto n180;
        B[x][y] = 1;
    }

    int s = 0, c = 0;

n210:
    printf("\nRAY ");
    scanf("%d", &R);
    if (R < 1) goto n480;

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
    if (Z == R)
    {
        printf("REFLECTED");
        s = s + 1;
        goto n210;
    }

n480:
    printf("NOW TELL ME, WHERE DO YOU THINK THE ATOMS ARE?\n");
    printf("IN ROW,COLUMN FORMAT PLEASE.\n");
    for(int q = 1;q < N;q++)
    {
        printf("ATOM # ");
        printf("%d",&q);
        int ii, jj;
        scanf("%d%d", &ii, &jj);
        if (B[jj][ii] != 1)
        {
            s = s + 5;
        }
        B[jj][ii] = 2;
        c = c + 1;
    }

    for(int j = 1;j < 8;j++)
    {
        for(int i = 1;i < 8;i++)
        {
            if(B[i][j] = 0)
            {
                printf(" .");
            }
            printf(" *");
        }
    }
    printf(" YOU GUESSED ");
    printf("%d",&c);
    printf(" OUT OF ");
    printf("%d",&N);
    printf(" ATOMS CORRECTLY!!\n");
    printf(" YOUR SCORE FOR THIS ROUND WAS");
    printf("%d",&s);
    printf(" POINTS.");
    printf(" CARE TO TRY AGAIN");
    char * A;
    scanf("%s", &A);
    if (A == "Y") goto n150;
    return 0; 
}
