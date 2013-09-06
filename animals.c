// animals.c -- uses a switch statement

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");

    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;

        if (islower(ch))
            switch (ch)
            {
                case 'a' :
                    printf("argali, a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("coati, racoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                case 'e':
                    printf("echidna, the spiny anteater\n");
                    break;
                case 'f':
                    printf("fisher, brownish marten\n");
                    break;
                case 'g':
                    printf("giraffe\n");
                    break;
                case 'h':
                    printf("hedgehog\n");
                    break;
                case 'i':
                    printf("impala\n");
                    break;
                case 'j':
                    printf("jaguar\n");
                    break;
                case 'k':
                    printf("kangaroo\n");
                    break;
                case 'l':
                    printf("lemur\n");
                    break;
                case 'm':
                    printf("manatee\n");
                    break;
                case 'n':
                    printf("numbat\n");
                    break;
                case 'o':
                    printf("ocelot\n");
                    break;
                default:
                    printf("No animal set for this letter.\n");
            }
        else
            printf("I recognize only lowercase letters.\n");

        while (getchar() != '\n')
            continue;

        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;
}
