#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int b[9][9];
    int n = 0, r = 0, x = 0, y = 0, x1 = 0, x2 = 0, x3 = 0;
    int s = 0, c = 0, y1 = 0, y2 = 0, y3 = 0, u = 0, v = 0, z = 0;
    printf("                        BLACKBOX\n");
    printf("                   CREATIVE COMPUTING\n");
    printf("                 MORRISTOWN, NEW JERSEY\n");
n150:
    printf("NO. OF ATOMS? ");
    scanf("%d", &n);
    for (int j = 0;j < 9;j++)
    {
        for (int i = 0;i < 9;i++)
        {
            b[i][j] = 0;
        }
    }
    for (int i = 1; i < n;i++)
    {
        n180:
        x = rand() % 8;
        y = rand() % 8;
        if (b[x][y] != 0) goto n180;
        b[x][y] = 1;
    }
n210:
    printf("\nRAY ");
    scanf("%d", &r);  
    while (r > 0)
    {
        if((r-1)/8+1 <= 240)
        {
            goto n240;
        }
        else if((r-1)/8+1 > 240 & (r-1)/8+1 <= 250)
        {
            goto n250;
        }
        else if((r-1)/8+1 > 250 & (r-1)/8+1 <= 260)
        {
            goto n260;
        }
        else if((r-1)/8+1 > 260 & (r-1)/8+1 <= 270)
        {
            goto n270;
        }
        else
        {
            printf ("ERROR\n");
            goto n210;
        }
    n240:
        x=0, y=r, u=1, v=0; 
        goto n280;
    n250:
        x=r-8, y=9, u=0, v=-1;
        goto n280;
    n260:
        x=9, y=25-r, u=-1, v=0;
        goto n280;
    n270:
        x=33-r, y=0, u=0, v=1;
    n280:
        x1 = x + u;
        y1 = y + v;

        if(u == 0)
        {
            x2 = x1 - 1, x3 = x1 + 1, y2 = y1, y3 = y1;
            goto n310;
        }
        y2 = y1 - 1, y3 = y1 + 1, x2 = x1, x3 = x1;
    n310:
        if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 330)
        {
            goto n330;
        }
        else if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 340)
        {
            goto n340;
        }
        else if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 350)
        {
            goto n350;
        }
        else if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 340)
        {
            goto n340;
        }
        else
        {
            printf("ABSORBED\n");
            s=s+1;
            goto n210;
        }
    n330:
        x = x1, y = y1;
        goto n380;
    n340:
        z = 1;
        goto n360;
    n350:
        z = -1;
    n360:
        if (u==0)
        {
        u=z, v=0; 
            goto n380;
        }
        u - 0, v = z;
    n380:
        if((x+15)/8 <= 420)
        {
            goto n420;
        }
        else if((x+15)/8 <= 400)
        {
            goto n400;
        }
        else if((x+15)/8 <= 430)
        {
            goto n430;
        }
        else break;
    n400:
        if((y+15)/8 <= 440)
        {
            goto n440;
        }
        else if((y+15)/8 <= 280)
        {
            goto n280;
        }
        else if((y+15)/8 <= 450)
        {
            goto n450;
        }
        else break;
    n420:
        z = y;
        goto n460;
    n430:
        z = 25 - y;
        goto n460;
    n440:
        z = 33 - x;
        goto n460;
    n450:
        z = 8 + x;
    n460:
        if (z == r)
        {
            printf("REFLECTED\n");
            s = s + 1;
            goto n210;
        }
        printf("TO\n");
        printf("%d",z);
        goto n210;
    }
n480:
    printf("NOW TELL ME, WHERE DO YOU THINK THE ATOMS ARE?\n");
    printf("IN ROW,COLUMN FORMAT PLEASE.\n");
    for(int q = 1;q < n;q++)
    {
        printf("ATOM # ");
        printf("%d",q);
        printf(" ");
        int ii, jj;
        scanf("%d%d", &ii, &jj);
        if (b[jj][ii] != 1)
        {
            s = s + 5;
        }
        b[jj][ii] = 2;
        c = c + 1;
    }
    printf("\n");
    for(int j = 1;j < 8;j++)
    {
        for(int i = 1;i < 8;i++)
        {
            if(b[i][j] == 0)
            {
                printf(" .");
            }
            printf(" *");
        }
        printf("\n");
    }
    printf(" YOU GUESSED ");
    printf("%d",c);
    printf(" OUT OF ");
    printf("%d",n);
    printf(" ATOMS CORRECTLY!!\n");
    printf(" YOUR SCORE FOR THIS ROUND WAS");
    printf("%d",s);
    printf(" POINTS.");
    printf(" CARE TO TRY AGAIN");
    char * a;
    scanf("%s", a);
    if (a == "Y") goto n150;
    return 0;
}
