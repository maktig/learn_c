#include <stdio.h>
int main (void)
{
    int cats;

    printf("How many cats do you have?\n");
    scanf("%d", &cats);
    printf("So you have %d cat(s)!\n", cats);

    return 0;
}
