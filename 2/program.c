#include <stdio.h>

int main()
{

    // int feltetel = 1;
    // printf("Adj meg egy számot! ");
    // scanf("%d", &feltetel);

    // egy soros komment
    /*
    Többsoros komment
    */

    /*
    switch (feltetel) {
        case 1:
            printf("Egy\n");
            break;
        case 2:
            printf("Ketto\n");
            break;
        case 3:
            printf("Harom\n");
            break;
        case 4:
            printf("Negy\n");
            break;
        case 5:
            printf("Ot\n");
            break;
        case 6:
            printf("Hat\n");
            break;
        case 7:
            printf("Het\n");
            break;
        case 8:
            printf("Nyolc\n");
            break;
        case 9:
            printf("Kilenc\n");
            break;
        default:
            printf("Nem 1-9 kozotti szamot adtal meg! :(\n");
            break;
    }
    */

    for (int i = 1; i <= 100; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    int i = 1;
    while (i <= 100)
    {
        printf("%d ", i);
        i++;
    }
}