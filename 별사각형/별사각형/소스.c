#include <stdio.h>


int main() {
    int i = 0;
    int j;

    while (i < 5) 
    {
        Sleep(1000);
        j = 0;
        while (j < 5) 
        {
            if (i == 0 || i == 4 || j == 0 || j == 4) 
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
            j = j+1;
        }
        printf("\n");
        i = i+1;
    }

    return 0;
}