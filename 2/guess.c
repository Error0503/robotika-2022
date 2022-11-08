#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int random = rand() % 10; // random szám 0-(10-1) között
    int bemenet;

    printf("Talald ki melyik szamra gondoltam!\n");

    int fut = 1;

    while (fut)
    {
        scanf("%d", &bemenet);
        if (bemenet != random) {
            printf("Nem talalt!\n");
        } else {
            fut = 0;
        }
    }
    printf("Nyertel!\n");
}