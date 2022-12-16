#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int b[9][9];
    char * a;
    int n = 0, r = 0, x = 0, y = 0, x1 = 0, x2 = 0, x3 = 0, ii = 0, jj = 0;
    int s = 0, c = 0, y1 = 0, y2 = 0, y3 = 0, u = 0, v = 0, z = 0;
    printf("                        BLACKBOX\n");
    printf("                   CREATIVE COMPUTING\n");
    printf("                 MORRISTOWN, NEW JERSEY\n");
n150:
    printf("NO. OF ATOMS? ");
    scanf("%d", &n);
    for (int j = 0;j < 8;j++)
    {
        for (int i = 0;i < 8;i++)
        {
            b[i][j] = 0;
        }
    }
    for (int i = 1; i < n + 1;i++)
    {
        n180:
        x = rand() % 9;
        y = rand() % 9;
        if (b[x][y] != 0) goto n180;
        b[x][y] = 1;
    }
n210:
    printf("\nRAY ");
    scanf("%d", &r);  
    while (r > 0)
    {
        if((r-1)/8+1 > 0 & (r-1)/8+1 <= 1)
        {
            goto n240;
        }
        else if((r-1)/8+1 > 1 & (r-1)/8+1 <= 2)
        {
            goto n250;
        }
        else if((r-1)/8+1 > 2 & (r-1)/8+1 <= 3)
        {
            goto n260;
        }
        else if((r-1)/8+1 > 3 & (r-1)/8+1 <= 4)
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
        if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] > 0 & 8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 1)
        {
            goto n330;
        }
        else if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] > 1 & 8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 2)
        {
            goto n340;
        }
        else if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] > 2 & 8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 3)
        {
            goto n350;
        }
        else if(8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] > 3 & 8*b[x1][y1]+b[x2][y2]+2*b[x3][y3] <= 4)
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
        if((x+15)/8 > 0 & (x+15)/8 <= 1)
        {
            goto n420;
        }
        else if((x+15)/8 > 1 & (x+15)/8 <= 2)
        {
            goto n400;
        }
        else if((x+15)/8 > 2 & (x+15)/8 <= 3)
        {
            goto n430;
        }
    n400:
        if((y+15)/8 > 0 & (y+15)/8 <= 1)
        {
            goto n440;
        }
        else if((y+15)/8 > 1 & (y+15)/8 <= 2)
        {
            goto n280;
        }
        else if((y+15)/8 > 2 & (y+15)/8 <= 3)
        {
            goto n450;
        }
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
        printf("TO ");
        printf("%d",z);
        s = s + 2;
        goto n210;
    }
n480:
    printf("NOW TELL ME, WHERE DO YOU THINK THE ATOMS ARE?\n");
    printf("(IN ROW,COLUMN FORMAT PLEASE.)\n");    
    for(int q = 1;q < n + 1;q++)
    {
        printf("ATOM # ");
        printf(" %d",q);
        printf(" ");
        scanf("%d%d", &ii, &jj);
        if (b[jj][ii] != 1)
        {
            s = s + 5;
            goto n540;
        }
        b[jj][ii] = 2;
        c = c + 1;
    n540:
        printf("\n");
    }
    printf("\n");
    for(int j = 0;j < 8;j++)
    {
        for(int i = 0;i < 8;i++)
        {
            if(b[i][j] == 0)
            {
                printf(" .");
            }
            else
            {
                printf(" *");
            }
            
        }
        printf("\n");
    }
    printf(" YOU GUESSED ");
    printf("%d",c);
    printf(" OUT OF ");
    printf("%d",n);
    printf(" ATOMS CORRECTLY!! \n");
    printf(" YOUR SCORE FOR THIS ROUND WAS");
    printf("%d",s);
    printf(" POINTS.");
    printf("\n CARE TO TRY AGAIN");
    scanf("%s", a);
    if (a == "y") goto n150;
}
