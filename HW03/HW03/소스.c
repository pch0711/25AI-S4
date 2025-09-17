#include <stdio.h>
#include <math.h>
#include <Windows.h>

void moveCursor(int x, int y)
{
    printf("\x1b[%d;%dH", y, x);
}

//매개변수 isExploded
//0: 폭발전 폭탄
//1: 폭발함
void printBomb(int isExploded)
{
    //폭탄은 항상 7칸
    if (isExploded)
    {
        printf("\x1b[A^^^^^^^");
        printf("\x1b[B\x1b[7D!!BAM!!");
        printf("\x1b[B\x1b[7D^^^^^^^");
    }
    else
        printf("(  b  )");
}

int main()
{
    moveCursor(0,3);
    printBomb(0);
    int x = 14;
    int y = 9;
    int z = 14;
    int r = 9;
    moveCursor(x, y);
    printf("*");
    while (x!=8 || y!=3)
    {
        if (x == 14 && y == 9)
        {
            while (y != 11 )
            {
                y = y + 1;
                moveCursor( x , y);
                printf("#");
            }
            while (x != 16)
            {
                x = x + 1;
                moveCursor(x, y);
                printf("#");
            }
            while (y != 7)
            {
                y = y - 1;
                moveCursor(x, y);
                printf("#");
            }
            while (x != 12)
            {
                x = x - 1;
                moveCursor(x, y);
                printf("#");
            }
            while (y != 13)
            {
                y = y + 1;
                moveCursor(x, y);
                printf("#");
            }
            while (x != 18)
            {
                x = x + 1;
                moveCursor(x, y);
                printf("#");
            }
            while (y != 5)
            {
                y = y - 1;
                moveCursor(x, y);
                printf("#");
            }
            while (x != 10)
            {
                x = x - 1;
                moveCursor(x, y);
                printf("#");
            }
            while (y != 15)
            {
                y = y + 1;
                moveCursor(x, y);
                printf("#");
            }
            while (x != 20)
            {
                x = x + 1;
                moveCursor(x, y);
                printf("#");
            }
            while (y != 3)
            {
                y = y - 1;
                moveCursor(x, y);
                printf("#");
            }
            while (x != 8)
            {
                x = x - 1;
                moveCursor(x, y);
                printf("#");
            }
        }

    }
    moveCursor(z, r);
    while (z != 8 && r != 3)
    {
        if (z == 14 && r == 9)
        {
            while (r != 11)
            {
                moveCursor(z, r);
                printf(" ");
                r = r + 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (z != 16)
            {
                moveCursor(z, r);
                printf(" ");
                z = z + 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (r != 7)
            {
                moveCursor(z, r);
                printf(" ");
                r = r - 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (z != 12)
            {
                moveCursor(z, r);
                printf(" ");
                z = z - 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (r != 13)
            {
                moveCursor(z, r);
                printf(" ");
                r = r + 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (z != 18)
            {
                moveCursor(z, r);
                printf(" ");
                z = z + 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (r != 5)
            {
                moveCursor(z, r);
                printf(" ");
                r = r - 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (z != 10)
            {
                moveCursor(z, r);
                printf(" ");
                z = z - 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (r != 15)
            {
                moveCursor(z, r);
                printf(" ");
                r = r + 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (z != 20)
            {
                moveCursor(z, r);
                printf(" ");
                z = z + 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (r != 3)
            {
                moveCursor(z, r);
                printf(" ");
                r = r - 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            while (z != 8)
            {
                moveCursor(z, r);
                printf(" ");
                z = z - 1;
                moveCursor(z, r);
                printf("*");
                Sleep(200);
            }
            moveCursor(8, 3);
                printf(" ");
            moveCursor(0, 3);
            printBomb(1);
        }
    }
    return 0;
}
